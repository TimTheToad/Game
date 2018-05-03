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
	Entity(sf::Vector2f position, sf::Texture& texture);
	~Entity();

	void setPosition(sf::Vector2f& position);
	void update(float deltaTime);

	sf::Vector2f getPosition();
	sf::Sprite getSprite();
};

#endif
