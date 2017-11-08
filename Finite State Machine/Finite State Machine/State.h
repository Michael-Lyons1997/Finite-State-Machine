/// <summary>
/// Empty Project for SFML[2.4.2]
/// 
/// 
/// @author Michael Lyons
/// @date October 2017
/// </summary>
#pragma once
#include <iostream>
class Animation;
class State
{
public:
	virtual void Idle(Animation* a)
	{
		std::cout << "Waiting for your command my lord." << std::endl;
	}
	virtual void Walking(Animation* a)
	{
		std::cout << "I am walking along." << std::endl;
	}
	virtual void Digging(Animation* a)
	{
		std::cout << "I am digging a hole." << std::endl;
	}
	virtual void Hammering(Animation* a)
	{
		std::cout << "I am using a hammer \n*clang clang*." << std::endl;
	}
	virtual void Swordsmanship(Animation* a)
	{
		std::cout << "I am using a sword." << std::endl;
	}
	virtual void Jumping(Animation *a)
	{
		std::cout << "WEEEEEEEEEE!!!!!!!!!!!!!" << std::endl;
	}
	virtual void Climbing(Animation *a)
	{
		std::cout << "Up I go." << std::endl;
	}
};

#include "Animation.h"