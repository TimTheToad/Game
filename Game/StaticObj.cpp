#include "StaticObj.h"



StaticObj::StaticObj(sf::Vector2f position, sf::Texture texture, sf::Vector2f size, sf::Vector2u nrOfImages)
	:Entity(position, texture, size, nrOfImages)
{
}


StaticObj::~StaticObj()
{
}
