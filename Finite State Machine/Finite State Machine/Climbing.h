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
class Climbing
{
public:
	Climbing();
	~Climbing();
	void idle(Animation* a)
	{
		std::cout << " I will stop climbing" << std::endl;
		a->setCurrent(new Idle());
		delete this;
	}
};

