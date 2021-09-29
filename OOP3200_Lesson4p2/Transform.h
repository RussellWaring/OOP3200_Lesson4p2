#pragma once
#ifndef __TRANSFORM__
#define __TRANSFORM__
#include "Vector2D.h"


struct Transform
{
	Vector2D position; // by default it is public
	Vector2D rotation;
	Vector2D scale;

	std::string ToString() const;
};

#endif /* defined (__TRANSFORM__) */	