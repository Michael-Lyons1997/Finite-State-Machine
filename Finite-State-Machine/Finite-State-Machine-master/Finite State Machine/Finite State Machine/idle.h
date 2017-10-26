/// <summary>
/// Empty Project for SFML[2.4.2]
/// 
/// 
/// @author Michael Lyons
/// @date October 2017
/// </summary>
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

