// This is a test file

#include "stdafx.h"
#include <iostream>
#include <thread>
#include <array>
#include <cstdlib>
#include <string>

void task1()
{
	std::cout << "Hello world!" << std::endl;
}

int main(std::array<System::String ^> ^args)
{
	std::cout << "Hello world" << std::endl;
	std::thread thread_1(task1);
	thread_1.join();
	return 0;
}
