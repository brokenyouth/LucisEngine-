#pragma once

#ifdef LE_PLATFORM_WINDOWS

extern Lucis::Application* Lucis::CreateApp();

int main(int argc, char** argv) 
{
	Lucis::Log::Init();
	LE_CORE_WARN("Initialized Log!");
	LE_ERROR("Initialized Client Log!");

	auto app = Lucis::CreateApp();
	app->Run();
	delete app;
}

#endif // LE_PLATFORM_WINDOWS
