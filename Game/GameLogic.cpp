#include "GameLogic.h"





GameLogic::GameLogic()
{
	this->body = new Entity();
	textureLoader.loadTextures("../Texture/cool.jpg", IMAGE);
	body = new NonStaticObj(sf::Vector2f(sf::VideoMode::getDesktopMode().width / 2, sf::VideoMode::getDesktopMode().height / 2), textureLoader.getTexture(IMAGE));
}


GameLogic::~GameLogic()
{
}


void GameLogic::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(*body, states);
}