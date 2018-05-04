#ifndef NONSTATICOBJ_H
#define NONSTATICOBJ_H


#include "Entity.h"


class NonStaticObj :
	public Entity
{
private:
	

public:

	NonStaticObj(sf::Vector2f position, sf::Texture& texture);
	~NonStaticObj();
	virtual void update(float deltaTime);

};

#endif