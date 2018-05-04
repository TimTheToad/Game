#ifndef NONSTATICOBJ_H
#define NONSTATICOBJ_H


#include "Entity.h"
#include "animation.h"

class NonStaticObj :
	public Entity
{
private:
	animation* animate;
	float animationSpeed;

public:

	NonStaticObj(sf::Vector2f position, sf::Texture& texture, sf::Vector2f size, sf::Vector2u nrOfImages);
	~NonStaticObj();
	virtual void update(float deltaTime);
	
	void setAnimationSpeed(float speed);
	
	float getAnimationSpeed()const;

};

#endif