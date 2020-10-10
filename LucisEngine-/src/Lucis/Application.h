#pragma once

#include "Core.h"

namespace Lucis {
	class LUCIS_API Application
	{
	public:
		Application();
		~Application();

		void Run();
	};

	// To be defined
	Application* CreateApp();
}