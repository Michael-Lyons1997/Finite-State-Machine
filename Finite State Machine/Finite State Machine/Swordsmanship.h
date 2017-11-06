/// <summary>
/// Empty Project for SFML[2.4.2]
/// 
/// 
/// @author Michael Lyons
/// @date October 2017
/// </summary>
#pragma once
#include "State.h"
#include "idle.h"
class Swording
{
public:
	Swording();
	~Swording();
	void idle(Animation* a)
	{
		std::cout << " I will stop using my sword" << std::endl;
		a->setCurrent(new Idle());
		delete this;
	}
};

