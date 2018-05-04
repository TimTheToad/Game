#ifndef PLAYER_H
#define PLAYER_H
#include "NonStaticObj.h"
class Player
	:public NonStaticObj
{
private:
	bool canJump;
	float gravity;
public:
	Player(sf::Vector2f position, sf::Texture& texture);
	~Player();

	virtual void update(float deltaTime);
};


#endif
