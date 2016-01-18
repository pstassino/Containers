#include <iostream>
#include <string>
#include <stack>

int main()
{
	std::stack<std::string> mystack;

	mystack.emplace("First");
	mystack.emplace("Second");

	mystack.push("Third");
	mystack.push("Fourth");

	std::cout << "Popping out elements...";

	while (!mystack.empty()) {
		std::cout << " " << mystack.top();
		mystack.pop();
	}
	std::cout << '\n';

	return 0;
}
