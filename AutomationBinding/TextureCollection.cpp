#include "AutomationAPI_TextureCollection.h"
#include "AutomationAPI_Texture.h"
#include <iostream>

class Texture; 

AutomationAPI::TextureCollection::TextureCollection(int guid) : m_guid(guid)
{

}

AutomationAPI::TextureCollection::~TextureCollection()
{

}

AutomationAPI::TextureCollection* CreateTextureBuilder(Texture* texture)
{

	return nullptr;

}
