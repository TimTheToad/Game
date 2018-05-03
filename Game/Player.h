#ifndef PLAYER_H
#define PLAYER_H
#include "NonStaticObj.h"
class Player
	:public NonStaticObj
{
private:

public:
	Player(sf::Vector2f position, sf::Texture& texture);
	~Player();

	void update(float deltaTime);
};


#endif
