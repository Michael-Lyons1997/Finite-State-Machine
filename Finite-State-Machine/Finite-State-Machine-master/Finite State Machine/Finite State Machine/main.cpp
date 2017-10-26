/// <summary>
/// Empty Project for SFML[2.4.2]
/// 
/// 
/// @author Michael Lyons
/// @date October 2017
/// </summary>

#ifdef _DEBUG 
#pragma comment(lib,"sfml-graphics-d.lib") 
#pragma comment(lib,"sfml-audio-d.lib") 
#pragma comment(lib,"sfml-system-d.lib") 
#pragma comment(lib,"sfml-window-d.lib") 
#pragma comment(lib,"sfml-network-d.lib") 
#else 
#pragma comment(lib,"sfml-graphics.lib") 
#pragma comment(lib,"sfml-audio.lib") 
#pragma comment(lib,"sfml-system.lib") 
#pragma comment(lib,"sfml-window.lib") 
#pragma comment(lib,"sfml-network.lib") 
#endif 



#include "State.h"
#include <thread>
#include <chrono>
/// <summary>
/// main enrtry point
/// </summary>
/// <returns>zero</returns>
int main()
{
	Animation fsm;
	int i = 0;
	while (true)
	{
		if (i == 0)
		{
			fsm.digging();
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			i = 1;
		}
		else
		{
			fsm.swordsmanship();
			std::this_thread::sleep_for(std::chrono::milliseconds(1000));
			i = 0;
		}
	}
	return 0;
}