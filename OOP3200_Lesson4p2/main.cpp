/*
 * @author:     Russell Waring
 * @date:       2021-09-29
 * @file:       _
 * @desc:       Following along in class, entry point file. Wednesday Week 4
 */


// OOP3200_Lesson4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

#include "Transform.h"
#include "Vector2D.h"

int main()
{
	

	// Create an empty vector of Transform shape
	std::vector<Transform> objects;

	// Initializes 5 objects of type Transform
	// then stores them inside the empty objects vector
	for (int i = 0; i < 5; ++i)
	{
		Transform temp_object;
		objects.push_back(temp_object);
	}

	int counter = 1;
	// For each object in objects
	for (Transform& object : objects) //print them out with a foreach (range-based loop?)
	{
		std::cout << "-----------------------------\n" << std::endl;
		std::cout << "Object# " << counter << std::endl;
		object.position.Set(counter * 10.0f, 0.0f);
		std::cout << object.ToString() << std::endl;
		std::cout << "-----------------------------\n" << std::endl;
		counter++;
	}

	float speed = 10.0f;
	std::cout << "Object# 1"

}

