#ifndef ENTITY_H
#define ENTITY_H
#include <SFML\Graphics.hpp>

class Entity :public sf::Drawable
{
private: 

	sf::Sprite body;
	sf::RectangleShape staticBody;
	sf::Vector2f position;

	void draw(sf::RenderTarget& target, sf::RenderStates states)const;

public:
	Entity(sf::Vector2f position, sf::Texture texture);
	~Entity();
};

#endif
