#pragma once
#include "AutomationBindingExports.h"
#include "AutomationAPI_IBuilder.h"

namespace AutomationAPI
{
	class CADObject;
	class BlockBuilder;
	class BlockBuilderImpl;
	/// <summary>
	/// Used to instantiate and manage a texture object.
	/// </summary>
	/// <remarks>
	/// This class is used to instantiate and manage a texture object.
	/// It can get and set the Journaling types for the texture.
	/// In addition, it can be called into to manipulate the mapping of the texture on an object.
	/// </remarks>
	/// See [Texture](@ref Texture)
	class AUTOMATIONBINDING_API TextureBuilder : public IBuilder
	{
	public:
		enum TextureJournalTypes
		{
			TextureJournalTypesColor, /**Represents the color of the texture. */
			TextureJournalTypesSaturation, /**Represents the color saturation of the texture.*/
			TextureJournalTypesBrightness /**Represents the brightness of the texture. */
		};

		void SetType(TextureJournalTypes type);
		TextureJournalTypes GetType();

		bool SetOpacity(int opacity);
		bool Translate(int translation);


		CADObject* Commit() override;

		/*
		* Internal Usage only.
		*/
		static TextureBuilder* CreateTextureBuilder(int guid);
		virtual ~TextureBuilder();
		TextureBuilder() = delete;

	private:

		TextureBuilder(int guid);

	};
}
