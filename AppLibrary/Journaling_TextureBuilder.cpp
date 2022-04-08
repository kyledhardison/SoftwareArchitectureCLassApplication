#include "Journaling_TextureBuilder.h"
#include "..\Journaling\Journaling.h"
#include "..\Journaling\JournalHelpers.h"


void Journaling_TextureBuilder_SetType(Application::TextureBuilder* textureBuilder, JournalTextureBuilderTypes type)
{
	// TODO implement function call and journaling

	textureBuilder->SetType(type);
}

JournalTextureBuilderTypes Journaling_TextureBuilder_GetType(Application::TextureBuilder* textureBuilder)
{
	// TODO implement function call and journaling

	auto type = textureBuilder->GetType();

	return type;
}

bool Journaling_TextureBuilder_SetOpcaity(int opacity)
{
	// TODO implement function call and journaling

	if (opacity) {
		return true;
	}
	return false;
}

bool Journaling_TextureBuilder_Translate(int translation)
{
	// TODO implement function call and journaling

	if (translation) {
		return true;
	}
	return false;

}