#include <iostream>
#include "OurCout.h"

int main()
{
	std::cout << "Hello World_std" << std::endl; // iostream의 cout
	our::cout << L"Hello World_our" << our::endl; // 직접 제작한 cout
	//둘다 잘 작동함
}