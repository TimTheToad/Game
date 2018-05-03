#include "Entity.h"



void Entity::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(body, states);
}

Entity::Entity(sf::Vector2f position, sf::Texture& texture)
{
	this->position = position;
	//this->body.setOrigin(sf::VideoMode::getDesktopMode().width * 0.5, sf::VideoMode::getDesktopMode().height * 0.5);
	this->body.setTexture(texture);
	this->body.setPosition(position + sf::Vector2f(200.0f, 100.0f));
	
}


Entity::~Entity()
{
}

void Entity::setPosition(sf::Vector2f& position)
{
	this->position += position;
}

void Entity::update(float deltaTime)
{

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) // up
	{
		setPosition(sf::Vector2f(0.0f, -90.0f * deltaTime));
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) // right
	{
		setPosition(sf::Vector2f(150.0f * deltaTime, 0.0f));
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) // down
	{
		setPosition(sf::Vector2f(0.0f, 90.0f * deltaTime));
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) //left
	{
		setPosition(sf::Vector2f(-150.0f * deltaTime, 0.0f));
	}
	getSprite().setPosition(getPosition().x, getPosition().y);

}

sf::Vector2f& Entity::getPosition()
{
	return this->position;
}

sf::Sprite& Entity::getSprite()
{
	return this->body;
}
