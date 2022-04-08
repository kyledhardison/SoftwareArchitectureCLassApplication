#include "Journaling_FeatureCollection.h"
#include "Block.h";
#include "BlockBuilder.h";
#include "Texture.h"
#include "TextureBuilder.h"
#include "..\AppPartOps\PartOps.h"
#include "..\Journaling\Journaling.h"
#include "..\Journaling\JournalHelpers.h"

Application::BlockBuilder* Journaling_FeatureCollection_CreateBlockBuilder(Application::PartFile *part, Application::Block* block)
{
	//If Journaling write the thing things
	if (IsJournaling())
	{
		JournalStartCall("CreateBlockBuilder", part);
		JournalInClassParam( block, "AutomationAPI::Block", "block");
	}
	Application::BlockBuilder* retVal = nullptr;
	// TODO
	// Obtain next available guid
	static int guid = 8888;
	guid++;
	retVal = new Application::BlockBuilder(block, guid);

	if (IsJournaling())
	{
		JournalReturnClass(retVal, "AutomationAPI::Blockbuilder", "Blockbuilder");
		JournalEndCall();
	}

	return retVal;
}

Application::TextureBuilder* Journaling_FeatureCollection_CreateTextureBuilder(Application::PartFile* part, Application::Texture* texture)
{
	//If Journaling write the  things
	if (IsJournaling())
	{
		JournalStartCall("CreateBlockBuilder", part);
		JournalInClassParam(texture, "AutomationAPI::Texture", "texture");
	}
	
	// TODO implement actual textureBuilder creation
	Application::TextureBuilder* textureBuilder = nullptr;

	if (IsJournaling())
	{
		JournalReturnClass(textureBuilder, "AutomationAPI::TextureBuilder", "TextureBuilder");
		JournalEndCall();
	}

	return textureBuilder;

}