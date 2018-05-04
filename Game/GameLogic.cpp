#include "GameLogic.h"





GameLogic::GameLogic()
{
	this->body = new Entity*[NR_OF_ENTITIES];
	textureLoader.loadTextures("../Texture/prototype-Sheet.png", IMAGE_ID);
	this->body[0] = new Player(sf::Vector2f(sf::VideoMode::getDesktopMode().width * 0.5, sf::VideoMode::getDesktopMode().height * 0.5), textureLoader.getTexture(IMAGE_ID), sf::Vector2f(120.0f, 280.0f), sf::Vector2u(2,1));
}


GameLogic::~GameLogic()
{
}

void GameLogic::update(float deltaTime)
{
	
	this->body[0]->update(deltaTime);

}


void GameLogic::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(*body[0], states);
}