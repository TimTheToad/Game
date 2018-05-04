#ifndef STATICOBJ_H
#define STATICOBJ_H
#include "Entity.h"


class StaticObj :
	public Entity
{
private: 

public:
	StaticObj(sf::Vector2f position, sf::Texture texture, sf::Vector2f size, sf::Vector2u nrOfImages);
	~StaticObj();
};

#endif 