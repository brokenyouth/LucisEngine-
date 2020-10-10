#pragma once

#ifdef LE_PLATFORM_WINDOWS

extern Lucis::Application* Lucis::CreateApp();

int main(int argc, char** argv) 
{
	printf("Lucis Engine. \n");
	auto app = Lucis::CreateApp();
	app->Run();
	delete app;
}

#endif // LE_PLATFORM_WINDOWS
