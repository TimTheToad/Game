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

	Entity::update(deltaTime);
}
