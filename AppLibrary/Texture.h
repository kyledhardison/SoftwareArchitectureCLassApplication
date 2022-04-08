#pragma once
#include "AppFeaturesOpsExports.h"
#include "Feature.h"

#include <iostream>
#include <fstream>
#include "..\Core\GuidObject.h"


namespace Application
{
	class APPLIBRARY_API ITexture : public GuidObject
	{
	public:
		virtual std::string GetVersion() = 0;
		ITexture(int guid) : GuidObject(guid)
		{

		}
		ITexture() = delete;
	};


	class APPLIBRARY_API Texture : public Application::Feature, public ITexture
	{
	public:
		Texture() = delete;
		Texture(int guid) : ITexture(guid)
		{

		}
		std::string GetVersion() override
		{
			return "1";
		}
	};
}

