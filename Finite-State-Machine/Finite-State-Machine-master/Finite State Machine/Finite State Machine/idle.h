#pragma once
#include "State.h"
class idle : public State
{
public:
	idle();
	~idle();
	void Walking(Animation* a);
	void Digging(Animation* a);
	void Hammering(Animation* a);
	void Swordsmanship(Animation* a);
};

