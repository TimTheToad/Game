#ifndef GAMELOGIC_H
#define GAMELOGIC_H
#include <SFML\Graphics.hpp>
#include "TextureLoader.h"
#include "Entity.h"
#include "NonStaticObj.h"
#include "StaticObj.h"

#define IMAGE 0

class GameLogic :public sf::Drawable
{
private: 

	//Menu
	Entity* body;
	TextureLoader textureLoader;

	void draw(sf::RenderTarget& target, sf::RenderStates states)const override;
public:
	
	GameLogic();
	~GameLogic();

};
#endif 