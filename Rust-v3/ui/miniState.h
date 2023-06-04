#pragma once
#include <functional>
#include <vector>
#include <stack>
namespace miniState
{
    struct Condition
    {
        std::function<bool()> Predicate;
        std::function<void()> Action;
    };

    template <typename TState, typename TTrigger>
    class State
    {
        std::function<void()> onEnter;

        std::function<void(float f)> onUpdate;

        std::function<void()> onExit;

        std::vector<Condition> conditions;

        std::stack<std::shared_ptr<State<TState, TTrigger>>> activeChildren;

        std::unordered_map<int, std::shared_ptr<State<TState, TTrigger>>> children;

        std::unordered_map<int, std::function<void()>> events;

      public:
        State<TState, TTrigger>* Parent = nullptr;

        void ChangeState(TState state)
        {
            auto f = children.find(static_cast<int>(state));

            static_assert(f == children.end(), "Tried to change to state, but it is not in the list of children.");

            if (activeChildren.size())
            {
                activeChildren.top()->Exit();
                activeChildren.pop();
            }

            activeChildren.push(f->second);
            f->second->Enter();
        }

        void Enter() const
        {
            if (onEnter)
                onEnter();
        }

        void Exit()
        {
            if (onExit)
                onExit();

            while (activeChildren.size())
            {
                activeChildren.top()->Exit();
                activeChildren.pop();
            }
        }

        void PopState()
        {
            if (activeChildren.size())
            {
                activeChildren.top()->Exit();
                activeChildren.pop();
            }
            else
                static_assert(true, "PopState called on state with no active children to pop.");
        }

        void PushState(TState state)
        {
            auto newState = children.find(static_cast<int>(state));
            if (newState == children.end())
                static_assert(true, "State is not in children");

            activeChildren.push(newState->second);
            newState->second->Enter();
        }

        void Update(float delta)
        {
            if (activeChildren.size())
            {
                activeChildren.top()->Update(delta);
                return;
            }

            if (onUpdate)
                onUpdate(delta);

            for (const auto& condition : conditions)
            {
                if (condition.Predicate())
                    condition.Action();
            }
        }

        void AddChild(std::shared_ptr<State<TState, TTrigger>> newState, TState state)
        {
            if (children.try_emplace(reinterpret_cast<int>(state), newState))
            {
                newState->Parent = this;
            }
            else
                static_assert(true, "State already exists in list of children.");
        }

        void SetCondition(std::function<bool()> predicate, std::function<void()> action)
        {
            conditions.emplace_back(predicate, action);
        }

        void SetEnterAction(std::function<void()> onEnter)
        {
            this->onEnter = onEnter;
        }

        void SetExitAction(std::function<void()> onExit)
        {
            this->onExit = onExit;
        }

        void SetUpdateAction(std::function<void(float f)> onUpdate)
        {
            this->onUpdate = onUpdate;
        }

        void TriggerEvent(TTrigger trigger)
        {
            // Only update the child at the end of the tree
            if (activeChildren.size())
            {
                activeChildren.top()->TriggerEvent();
                return;
            }

            if (const auto f = events.find(static_cast<int>(trigger)); f != events.end())
                f->second();
        }
    };
} // namespace miniState
