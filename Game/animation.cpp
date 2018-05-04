#include "animation.h"



animation::animation(sf::Texture * texture, sf::Vector2u imageCount, float switchTime)
{
	this->imageCount = imageCount;
	this->switchTime = switchTime;

	this->totalTime = 0.0f;
	currentImage.x = 0;
	currentImage.y = 0;
	
	uvRect.width = texture->getSize().x / float(imageCount.x);
	uvRect.height = texture->getSize().y / float(imageCount.y);

}

animation::~animation()
{
}

void animation::update(int row, float deltaTime, float animationSpeed)
{
	currentImage.y = row;
	totalTime += deltaTime;
	setSpeed(animationSpeed);

	if (totalTime >= switchTime)
	{
		totalTime = 0;
		currentImage.x++;
		
		if (currentImage.x >= imageCount.x)
		{
			currentImage.x = 0;
		}
	}

	uvRect.left = currentImage.x * uvRect.width;
	uvRect.top = currentImage.y * uvRect.height;

}

void animation::setSpeed(float speed)
{
	this->switchTime = speed;
}
