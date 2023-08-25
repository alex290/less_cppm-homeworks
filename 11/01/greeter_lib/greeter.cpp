#include "greeter.h"

Greeter::Greeter()
{
}

std::string Greeter::greet(std::string name)
{
	return "Здравствуйте, " + name + "!";
}
