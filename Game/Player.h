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
	Player(sf::Vector2f position, sf::Texture& texture, sf::Vector2f size, sf::Vector2u nrOfImages);
	~Player();

	virtual void update(float deltaTime);
};


#endif
