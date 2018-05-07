#include "NonStaticObj.h"



NonStaticObj::NonStaticObj(sf::Vector2f position, sf::Texture& texture, sf::Vector2f size, sf::Vector2u nrOfImages)
	:Entity(position, texture, size, nrOfImages)
{
	this->animationSpeed = 1.00f;
	this->animate = new animation(&texture, nrOfImages, getAnimationSpeed());
}


NonStaticObj::~NonStaticObj()
{
}

void NonStaticObj::update(float deltaTime)
{
	getSprite().setTextureRect(animate->uvRect);
	animate->update(getCurrentRow(), deltaTime, getAnimationSpeed());
	Entity::update(deltaTime);
}

void NonStaticObj::setAnimationSpeed(float speed)
{
	this->animationSpeed = speed;
}

void NonStaticObj::acceleration(sf::Vector2f speed)
{
	velocity += speed;
	setPosition(velocity);
}



float NonStaticObj::getAnimationSpeed() const
{
	return this->animationSpeed;
}
