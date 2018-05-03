#include "TextureLoader.h"



TextureLoader::TextureLoader()
{
	this->textures = new sf::Texture[NR_OF_TEXTURES];
}


TextureLoader::~TextureLoader()
{
	delete[] this->textures;
}

void TextureLoader::loadTextures(std::string path, int typeID)
{
	bool test = this->textures[typeID].loadFromFile(path);
}

sf::Texture & TextureLoader::getTexture(int typeID) const
{
	return this->textures[typeID];
}
