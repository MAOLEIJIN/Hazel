#pragma once

#include "Core.h"

namespace Hazel {

	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};



	// To be defined in CLIENT(应该定义在客户端）
	Application* CreateApplication();
}

