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
}

void Animation::walking()
{
	current->Walking(this);
}

void Animation::digging()
{
	current->Digging(this);
}

void Animation::hammering()
{
	current->Hammering(this);
}

void Animation::swordsmanship()
{
	current->Swordsmanship(this);
}

void Animation::jumping()
{
	current->Jumping(this);
}
