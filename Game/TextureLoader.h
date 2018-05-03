#ifndef TEXTURELOADER_H
#define TEXTURELOADER_H
#include "SFML\Graphics.hpp"
#include <iostream>

#define NR_OF_TEXTURES 1


class TextureLoader
{
private: 
	sf::Texture* textures;

public:
	TextureLoader();
	~TextureLoader();


	void loadTextures(std::string path, int typeID);
	sf::Texture& getTexture(int typeID)const;
};

#endif