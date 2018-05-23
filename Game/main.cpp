#include <SFML\Graphics.hpp>
#include "GameLogic.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode::getDesktopMode(), "Hermans Fuckboii!",sf::Style::Close | sf::Style::Titlebar | sf::Style::Resize);

	GameLogic game;
	sf::Clock gameTime;

	while (window.isOpen())
	{
		sf::Event evnt;
		while (window.pollEvent(evnt))
		{
			switch (evnt.type)
			{
			case sf::Event::Closed:
				window.close();
				break;
			}
		}

		game.update(gameTime.restart().asSeconds());

		window.clear();
		window.draw(game);
		window.display();
	}


	return 0;
}