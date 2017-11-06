#include "Game.h"
#include <iostream>

// Updates per milliseconds
static double const MS_PER_UPDATE = 10.0;

////////////////////////////////////////////////////////////
Game::Game()
	: m_window(sf::VideoMode(800, 400, 32), "SFML Playground", sf::Style::Default)
{
	m_window.setVerticalSyncEnabled(true);
}

////////////////////////////////////////////////////////////
void Game::run()
{
	sf::Clock clock;
	sf::Int32 lag = 0;

	while (m_window.isOpen())
	{
		sf::Time dt = clock.restart();

		lag += dt.asMilliseconds();

		processEvents();

		while (lag > MS_PER_UPDATE)
		{
			update(MS_PER_UPDATE);
			lag -= (sf::Int32)MS_PER_UPDATE;
		}
		update(MS_PER_UPDATE);

		render();
	}
}

////////////////////////////////////////////////////////////
void Game::processEvents()
{
	sf::Event event;
	while (m_window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			m_window.close();
		}
		processGameEvents(event);
	}
}

////////////////////////////////////////////////////////////
void Game::processGameEvents(sf::Event& event)
{
	// check if the event is a a mouse button release
	if (sf::Event::KeyPressed == event.type)
	{
		switch (event.key.code)
		{
		case sf::Keyboard::D:
			fsm.digging();
			std::this_thread::sleep_for(std::chrono::milliseconds(2000));
			break;
		case sf::Keyboard::H:
			fsm.hammering();
			std::this_thread::sleep_for(std::chrono::milliseconds(2000));
			break;
		case sf::Keyboard::S:
			fsm.swordsmanship();
			std::this_thread::sleep_for(std::chrono::milliseconds(2000));
			break;
		case sf::Keyboard::W:
			fsm.walking();
			std::this_thread::sleep_for(std::chrono::milliseconds(2000));
			break;
		default:
			break;
		}
	}
	fsm.idle();
}

////////////////////////////////////////////////////////////
void Game::update(double dt)
{
}

////////////////////////////////////////////////////////////
void Game::render()
{
	m_window.clear();
	m_window.display();
}





