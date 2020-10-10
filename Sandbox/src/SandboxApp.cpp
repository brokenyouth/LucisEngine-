#include <Lucis.h>

class Sandbox : public Lucis::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}

};

Lucis::Application* Lucis::CreateApp()
{
	return new Sandbox();
}