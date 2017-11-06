/// <summary>
/// Empty Project for SFML[2.4.2]
/// 
/// 
/// @author Michael Lyons
/// @date October 2017
/// </summary>
#include "idle.h"



Idle::Idle()
{
}


Idle::~Idle()
{
}

void Idle::Walking(Animation * a)
{
	std::cout << "I am now walking" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Idle::Digging(Animation * a)
{
	std::cout << "I am now digging" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Idle::Hammering(Animation * a)
{
	std::cout << "I am now hammering" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Idle::Swordsmanship(Animation * a)
{
	std::cout << "I am now swinging a sword" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Idle::Jumping(Animation * a)
{
	std::cout << "WEEEEEEEEEE!!!!!!!!!!!" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
