#pragma once

#include "AppFeaturesOpsExports.h"
#include "..\AppLibrary\TextureBuilder.h"

APPLIBRARY_API void Journaling_TextureBuilder_SetType(Application::TextureBuilder* textureBuilder, JournalTextureBuilderTypes type);

APPLIBRARY_API JournalTextureBuilderTypes Journaling_TextureBuilder_GetType(Application::TextureBuilder* textureBuilder);

APPLIBRARY_API bool Journaling_TextureBuilder_SetOpcaity(int opacity);

APPLIBRARY_API bool Journaling_TextureBuilder_Translate(int translation);
