#include "Player.h"




Player::Player(sf::Vector2f position, sf::Texture & texture)
	:NonStaticObj(position, texture)
{
	this->canJump = true;
	gravity = 10.0f;
}

Player::~Player()
{
}

void Player::update(float deltaTime)
{
	
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) // up
	{
		setPosition(sf::Vector2f(0.0f, -120.0f * deltaTime));
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) // right
	{
		setPosition(sf::Vector2f(190.0f * deltaTime, 0.0f));
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) // down
	{
		setPosition(sf::Vector2f(0.0f, 120.0f * deltaTime));
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) //left
	{
		setPosition(sf::Vector2f(-190.0f * deltaTime, 0.0f));
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space) && canJump)
	{
		setPosition(sf::Vector2f(0.0f, -200.0f));
		this->canJump = false;
	}

	NonStaticObj::update(deltaTime);
}
