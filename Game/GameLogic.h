#ifndef GAMELOGIC_H
#define GAMELOGIC_H
#include <SFML\Graphics.hpp>
#include "TextureLoader.h"
#include "Entity.h"
#include "NonStaticObj.h"
#include "StaticObj.h"
#include "Player.h"

#define IMAGE_ID 0
#define NR_OF_ENTITIES 1

class GameLogic :public sf::Drawable
{
private: 

	//Menu
	Entity** body;
	TextureLoader textureLoader;

	void draw(sf::RenderTarget& target, sf::RenderStates states)const override;
public:
	
	GameLogic();
	~GameLogic();
	void update(float deltaTime);

};
#endif 