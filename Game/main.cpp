#include <SFML\Graphics.hpp>
#include "GameLogic.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode::getDesktopMode(), "Hermans Fuckboii!",sf::Style::Close | sf::Style::Titlebar | sf::Style::Resize);
	sf::Sprite sprite;
	sf::Texture texture;

	GameLogic game;

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

		window.clear();
		window.draw(game);
		window.display();
	}


	return 0;
}