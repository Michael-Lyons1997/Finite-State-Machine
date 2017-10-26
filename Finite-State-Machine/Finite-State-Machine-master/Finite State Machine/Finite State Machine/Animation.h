#pragma once
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
	void walking();
	void digging();
	void hammering();
	void swordsmanship();
};

