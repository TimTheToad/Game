#ifndef ENTITY_H
#define ENTITY_H
#include <SFML\Graphics.hpp>

class Entity :public sf::Drawable
{
private: 

	sf::Sprite body;
	sf::RectangleShape staticBody;
	sf::Vector2f position;
	sf::Vector2f velocity;
	sf::Vector2f size;
	sf::Vector2u nrOfImages;
	sf::Texture spriteTex;
	int currentRow;

	void draw(sf::RenderTarget& target, sf::RenderStates states)const;

public:
	Entity(sf::Vector2f position, sf::Texture& texture, sf::Vector2f size, sf::Vector2u nrOfImages);
	~Entity();

	void setSpriteTex(sf::Texture& texture);
	void setNrOfImages(const sf::Vector2u rows);
	void setCurrentRow(int currentRow);
	void setVelocity(sf::Vector2f& velocity);
	void setPosition(sf::Vector2f& position);
	virtual void update(float deltaTime);

	int getCurrentRow()const;
	sf::Vector2f& getVelocity()const;
	sf::Vector2f& getPosition();
	sf::Sprite& getSprite();
	sf::Vector2u& getNrOfImages();
};

#endif
