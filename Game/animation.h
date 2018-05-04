#ifndef ANIMATION_H
#define ANIMATION_H

#include <time.h>
#include "SFML\Graphics.hpp"

class animation
{
private: 
	sf::Vector2u imageCount;
	sf::Vector2u currentImage;

	float totalTime;
	float switchTime;

public:
	animation(sf::Texture* texture, sf::Vector2u imageCount, float switchTime);
	~animation();

	void update(int row, float deltaTime, float animationSpeed);
	void setSpeed(float speed);
	sf::IntRect uvRect;
};

#endif