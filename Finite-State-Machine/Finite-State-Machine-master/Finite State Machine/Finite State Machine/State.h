#pragma once
#include <iostream>
#include "Animation.h"
class State
{
public:
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
	virtual void swordsmanship(Animation* a)
	{
		std::cout << "I am using a sword." << std::endl;
	}
};

