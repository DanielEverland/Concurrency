#include <iostream>
#include <thread>

void hello()
{
	std::cout << "Hello Concurrent World\n";
}

void main()
{
	std::thread t(hello);
	t.join();
}