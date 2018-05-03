#include "NonStaticObj.h"



NonStaticObj::NonStaticObj(sf::Vector2f position, sf::Texture& texture)
	:Entity(position, texture)
{
	
}


NonStaticObj::~NonStaticObj()
{
}

void NonStaticObj::update(float deltaTime)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		Entity::getSprite().setPosition(sf::Vector2f(0.5f * deltaTime, 0.0f));
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		getSprite().setPosition(sf::Vector2f(0.0f, 1.0f * deltaTime));
	}
	Entity::update(deltaTime);
}
