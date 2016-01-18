#include <iostream>
#include <string>
#include <queue>

int main()
{
	std::queue<std::string> myqueue;

	myqueue.emplace("First");
	myqueue.emplace("Second");

	myqueue.push("Third");
	myqueue.push("Fourth");

	std::cout << "dequing elements...";

	while (!myqueue.empty()) {
		std::cout << " " << myqueue.front();
		myqueue.pop();
	}
	std::cout << '\n';

	return 0;
}
