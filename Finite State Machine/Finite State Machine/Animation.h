/// <summary>
/// Empty Project for SFML[2.4.2]
/// 
/// 
/// @author Michael Lyons
/// @date October 2017
/// </summary>
#pragma once
class State;
class Idle;
class Animation
{
	class State* current;
public:
	Animation();
	~Animation();
	void setCurrent(State* s)
	{
		current = s;
	}
	void idle();
	void walking();
	void digging();
	void hammering();
	void swordsmanship();
};
#include "State.h"
#include "idle.h"
