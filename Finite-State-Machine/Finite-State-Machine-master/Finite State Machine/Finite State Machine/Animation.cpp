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
	current = new walking();
}


Animation::~Animation()
{
}

void Animation::walking()
{
	current->walking(this);
}

void Animation::digging()
{
	current->digging(this);
}

void Animation::hammering()
{
	current->hammering(this);
}

void Animation::swordsmanship()
{
	current->swordsmanship(this);
}
