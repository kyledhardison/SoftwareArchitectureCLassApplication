#pragma once
#include "AutomationBindingExports.h"
namespace AutomationAPI
{
	class Texture;
	class TextureBuilder;
	/// <summary>
	/// Used by Part to provide the PIMPL implementation of TextureBuilder 
	/// </summary>
	class AUTOMATIONBINDING_API TextureCollection
	{
	public:
		TextureCollection(int guid);

		virtual ~TextureCollection();

		TextureBuilder* CreateTextureBuilder(Texture* texture);

	private:
		int m_guid;
	};
}
#pragma once
