#pragma once
#include "State.h"
#include "idle.h"
class Jumping
{
public:
	Jumping();
	~Jumping();
	void idle(Animation* a)
	{
		std::cout << " I will stop jumping" << std::endl;
		a->setCurrent(new Idle());
		delete this;
	}
};
