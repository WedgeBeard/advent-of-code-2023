#include "Core.h"

#include <iostream>

namespace Core {

	void PrintHelloWorld(std::string args)
	{
		std::cout << "Hello World!\n";
		std::cout << "This is " << args << std::endl;
		std::cin.get();
	}

}