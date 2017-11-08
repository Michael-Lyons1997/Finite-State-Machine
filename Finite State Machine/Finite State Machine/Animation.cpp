/// <summary>
/// Empty Project for SFML[2.4.2]
/// 
/// 
/// @author Michael Lyons
/// @date October 2017
/// </summary>
#include "Animation.h"



Animation::Animation()
{
	current = new Idle();
}


Animation::~Animation()
{
}

void Animation::idle()
{
	current->Idle(this);
	setCurrent(current);
}

void Animation::walking()
{
	current->Walking(this);
	setCurrent(current);
}

void Animation::digging()
{
	current->Digging(this);
	setCurrent(current);
}

void Animation::hammering()
{
	current->Hammering(this);
	setCurrent(current);
}

void Animation::swordsmanship()
{
	current->Swordsmanship(this);
	setCurrent(current);
}

void Animation::jumping()
{
	current->Jumping(this);
	setCurrent(current);
}

void Animation::climbing()
{
	current->Climbing(this);
	setCurrent(current);
}
