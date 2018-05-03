#include "Entity.h"



void Entity::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(body, states);
}

Entity::Entity(sf::Vector2f position, sf::Texture texture)
{
	this->position = position;
	this->body.setTexture(texture);
	
}


Entity::~Entity()
{
}
