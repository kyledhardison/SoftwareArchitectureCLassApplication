#include "TextureBuilder.h"
#include <iostream>

Application::TextureBuilder::TextureBuilder(Application::Texture* texture, int guid) : GuidObject(guid), m_texture(texture)
{

	if (m_texture == nullptr)
	{
		std::cout << "Texture is creation mode" << std::endl;
	}
	else
	{
		std::cout << "Texture is edit/query mode" << std::endl;
	}
}

JournalTextureBuilderTypes Application::TextureBuilder::GetType()
{
	return m_journalTextureBuilderTypes;
}
void Application::TextureBuilder::SetType(JournalTextureBuilderTypes type)
{
	m_journalTextureBuilderTypes = type;
}

bool Application::TextureBuilder::SetOpacity(int opacity)
{
	// TODO: Implemenmt this to actually set the opacity
	if (opacity) {
		return true;
	}
	return false;
}

bool Application::TextureBuilder::Translate(int translation)
{
	// TODO: Implemenmt this to actually translate the texture across the surface
	if (translation) {
		return true;
	}
	return false;

}