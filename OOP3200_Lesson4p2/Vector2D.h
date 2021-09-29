/*
 * @author		Russell Waring
 * @studentid	100528426
 * @date		September 20, 2021
 * @desc		Demo project for OOP3200 - F2021 - Week 3
 * Declarations happen on this file
 */

#pragma once
#ifndef __VECTOR_2D__
#define __VECTOR_2D__

#include <string>

class Vector2D // a class is a custom data type
{
public:
	// CONSTRUCTOR(S)
	Vector2D();
	Vector2D(float value);
	Vector2D(float x, float y);

	// COPY CONSTRUCTOR
	Vector2D(const Vector2D& vector_2d);

	// DESTRUCTOR - can only ever have one
	~Vector2D();

	// OPERATOR OVERRIDES - overriding default behaviour (& means passing information by reference)
	Vector2D operator=(const Vector2D& rhs_vector); // left hand is MY vector, on right hand side another vector 2d obj I am assigning to this one
	Vector2D operator+(const Vector2D& rhs_vector) const;
	Vector2D operator-(const Vector2D& rhs_vector) const;

	Vector2D operator*(const Vector2D& rhs_vector); // override
	Vector2D operator*(const float rhs_scalar); // overload, different signature

	// FRIEND OVERLOAD
	friend Vector2D operator*(const float lhs_scalar, const Vector2D& rhs_vector);

	friend std::ostream& operator<<(std::ostream& out, const Vector2D& rhs_vector);
	friend std::istream& operator>>(std::istream& in, Vector2D& rhs_vector);


	// GETTERS (Accessors)
	float GetX() const;
	float GetY() const;

	// SETTERS (Mutators)
	void SetX(float x);
	void SetY(float y);
	void Set(float x, float y);

	// PUBLIC METHODS (Public Class Functions)
	std::string ToString() const;

	// PUBLIC STATIC METHODS (Public Class Functions that are Static) -> can access without creating an object.
	static float Distance(const Vector2D& lhs, const Vector2D& rhs);

private:
	// INSTANCE VARIABLES (Class Member Variables)
	float m_x;
	float m_y;

	// PRIVATE METHODS (Private Class Functions)

};
#endif /* defined (__VECTOR_2D__) */
