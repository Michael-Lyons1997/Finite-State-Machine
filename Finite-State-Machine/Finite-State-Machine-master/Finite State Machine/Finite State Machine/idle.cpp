/// <summary>
/// Empty Project for SFML[2.4.2]
/// 
/// 
/// @author Michael Lyons
/// @date October 2017
/// </summary>
#include "idle.h"



idle::idle()
{
}


idle::~idle()
{
}


void idle::Walking(Animation * a)
{
	std::cout << "I am now walking" << std::endl;
	a->setCurrent(new idle());
	delete this;
}

void idle::Digging(Animation * a)
{
	std::cout << "I am now digging" << std::endl;
	a->setCurrent(new idle());
	delete this;
}

void idle::Hammering(Animation * a)
{
	std::cout << "I am now hammering" << std::endl;
	a->setCurrent(new idle());
	delete this;
}

void idle::Swordsmanship(Animation * a)
{
	std::cout << "I am now swinging a sword" << std::endl;
	a->setCurrent(new idle());
	delete this;
}