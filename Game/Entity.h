#ifndef ENTITY_H
#define ENTITY_H
#include <SFML\Graphics.hpp>

class Entity :public sf::Drawable
{
private: 

	sf::Sprite body;
	sf::RectangleShape staticBody;
	sf::Vector2f position;
	sf::Vector2f velocity;

	void draw(sf::RenderTarget& target, sf::RenderStates states)const;

public:
	Entity(sf::Vector2f position, sf::Texture& texture);
	~Entity();

	void setVelocity(sf::Vector2f& velocity);
	void setPosition(sf::Vector2f& position);
	virtual void update(float deltaTime);

	sf::Vector2f& getVelocity();
	sf::Vector2f& getPosition();
	sf::Sprite& getSprite();
};

#endif
