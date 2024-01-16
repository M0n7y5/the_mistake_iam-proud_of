#pragma once
#include "trunc.hpp"
namespace crt::math {
	inline float modf( float x, float y ) {
		return x - math::trunc( x / y ) * y;
	}
}