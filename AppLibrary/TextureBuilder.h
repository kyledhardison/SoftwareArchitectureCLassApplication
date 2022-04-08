#pragma once
#include "AppFeaturesOpsExports.h"
#include "..\Core\GuidObject.h"
#include "Extrude.h"
#include "Block.h"

enum JournalTextureBuilderTypes
{
	TextureJournalTypesColor, /**Represents the color of the texture. */
	TextureJournalTypesSaturation, /**Represents the color saturation of the texture.*/
	TextureJournalTypesBrightness /**Represents the brightness of the texture. */
};

namespace Application
{
	class Texture;
	class Block;
	class Wire;
	/// <summary>
	/// Used to instantiate and manage a texture object.
	/// </summary>
	/// <remarks>
	/// This class is used to instantiate and manage a texture object.
	/// It can get and set the Journaling types for the texture.
	/// In addition, it can be called into to manipulate the mapping of the texture on an object.
	/// </remarks>
	/// See [Texture](@ref Texture)
	class APPLIBRARY_API TextureBuilder : public GuidObject
	{
	public:
		TextureBuilder() = delete;
		TextureBuilder(Application::Texture* texture, int guid);
		JournalTextureBuilderTypes GetType();
		void SetType(JournalTextureBuilderTypes type);
		bool SetOpacity(int opacity);
		bool Translate(int translation);

	private:
		Texture* m_texture;
		JournalTextureBuilderTypes m_journalTextureBuilderTypes;

	};
}


