#include "Player.h"




Player::Player(sf::Vector2f position, sf::Texture & texture)
	:NonStaticObj(position, texture)
{
}

Player::~Player()
{
}

void Player::update(float deltaTime)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) // up
	{
		setPosition(sf::Vector2f(0.0f, -90.0f * deltaTime));
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) // right
	{
		setPosition(sf::Vector2f(150.0f * deltaTime, 0.0f));
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) // down
	{
		setPosition(sf::Vector2f(0.0f, 90.0f * deltaTime));
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) //left
	{
		setPosition(sf::Vector2f(-150.0f * deltaTime, 0.0f));
	}
	NonStaticObj::update(deltaTime);
}
