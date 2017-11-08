#include "Game.h"
#include <iostream>

// Updates per milliseconds
static double const MS_PER_UPDATE = 10.0;

////////////////////////////////////////////////////////////
Game::Game()
	: m_window(sf::VideoMode(800, 400, 32), "SFML Playground", sf::Style::Default)
{
	m_window.setVerticalSyncEnabled(true);
	if (!m_font.loadFromFile("ASSETS\\FONTS\\ariblk.ttf"))
	{
		std::cout << "problem loading arial black font" << std::endl;
	}
	m_instructions.setFont(m_font);
	m_instructions.setPosition(0.0f, 0.0f);
	m_instructions.setCharacterSize(24);
	m_instructions.setString("Use C for climbing, D for digging, H for hammering, \nJ for jumping, S for swordsmanship, and W for walking");

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
	fsm.idle();
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
		case sf::Keyboard::J:
			fsm.jumping();
			std::this_thread::sleep_for(std::chrono::milliseconds(2000));
			break;
		case sf::Keyboard::C:
			fsm.climbing();
			std::this_thread::sleep_for(std::chrono::milliseconds(2000));
			break;
		default:
			break;
		}
	}
}

////////////////////////////////////////////////////////////
void Game::update(double dt)
{
}

////////////////////////////////////////////////////////////
void Game::render()
{
	m_window.clear();
	m_window.draw(m_instructions);
	m_window.display();
}





