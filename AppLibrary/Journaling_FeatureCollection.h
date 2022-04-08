#pragma once
#include "AppFeaturesOpsExports.h"

namespace Application
{
	class Block;
	class PartFile;
	class BlockBuilder;
	class Texture;
	class TextureBuilder;
}


APPLIBRARY_API Application::BlockBuilder* Journaling_FeatureCollection_CreateBlockBuilder(Application::PartFile *part, Application::Block* block);

APPLIBRARY_API Application::TextureBuilder* Journaling_FeatureCollection_CreateTextureBuilder(Application::PartFile* part, Application::Texture* texture);
