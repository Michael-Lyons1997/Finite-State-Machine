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
