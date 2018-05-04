#include "Entity.h"



void Entity::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(body, states);

	sf::FloatRect rect = body.getGlobalBounds();
	sf::RectangleShape temp(sf::Vector2f(rect.width, rect.height));
	temp.setPosition(rect.left, rect.top);
	temp.setOutlineColor(sf::Color::Red);
	temp.setOutlineThickness(2);
	temp.setFillColor(sf::Color::Transparent);
	target.draw(temp, states);
}

Entity::Entity(sf::Vector2f position, sf::Texture& texture, sf::Vector2f size, sf::Vector2u nrOfImages)
{
	this->nrOfImages = nrOfImages;
	this->size = size;
	this->position = position;
	setSpriteTex(texture);
	//this->body.setOrigin(sf::VideoMode::getDesktopMode().width * 0.5, sf::VideoMode::getDesktopMode().height * 0.5);
	this->body.setScale((this->size.x / (float)(texture.getSize().x / this->nrOfImages.x)), (this->size.y / (float)(texture.getSize().y / this->nrOfImages.y)));
	this->body.setPosition(position + sf::Vector2f(200.0f, 100.0f));
	
}


Entity::~Entity()
{
}

void Entity::setSpriteTex(sf::Texture & texture)
{
	this->body.setTexture(texture);
}

void Entity::setNrOfImages(const sf::Vector2u rows)
{
	this->nrOfImages = rows;
}

void Entity::setCurrentRow(int currentRow)
{
	this->currentRow = currentRow;
}

void Entity::setPosition(sf::Vector2f& position)
{
	this->position += position;
}

void Entity::update(float deltaTime)
{

	
	getSprite().setPosition(getPosition().x, getPosition().y);

}

int Entity::getCurrentRow() const
{
	return this->currentRow;
}

sf::Vector2f& Entity::getPosition()
{
	return this->position;
}

sf::Sprite& Entity::getSprite()
{
	return this->body;
}

sf::Vector2u & Entity::getNrOfImages() 
{
	return this->nrOfImages;
}
