/// <summary>
/// Empty Project for SFML[2.4.2]
/// 
/// 
/// @author Michael Lyons
/// @date October 2017
/// </summary>
#pragma once

#include "Animation.h"
class State;
class Idle : public State
{
public:
	Idle();
	~Idle();
	void Walking(Animation* a);
	void Digging(Animation* a);
	void Hammering(Animation* a);
	void Swordsmanship(Animation* a);
	void Jumping(Animation* a);
};
#include "State.h"
