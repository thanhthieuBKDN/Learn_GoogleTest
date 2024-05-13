// Mymath.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "Mymath.hpp"

double mySquera(double x)
{
	if (x > 0) {
		return sqrt(x);
	}
	return 0.0;
}
