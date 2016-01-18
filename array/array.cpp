#include <iostream>
#include <string>
#include <array>

int main()
{
//	std::array<int, 10> myarray = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	std::array<int, 10> myarray;
	for (int i = 0; i < 10; i++) 
		myarray[i] = i + 1;
	//	myarray.at(i) = i + 1;        // assign some values:

	std::cout << "front is: " << myarray.front() << '\n';   // 1
	std::cout << "back is: " << myarray.back() << '\n';     // 10

	// print content:
	std::cout << "myarray contains:";
	for (int i = 0; i < 10; i++)
		std::cout << ' ' << myarray[i];
	std::cout << '\n';

	std::cout << "myarray contains:";
	for (auto it = myarray.begin(); it != myarray.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';

	std::cout << "myarray contains:";
	for (int& x : myarray) 
		std::cout << ' ' << x;
	std::cout << '\n';

	const char* str = { "test" };
	std::array<char, 12> charray;
	charray.fill('\0');
	std::memcpy(charray.data(), str, sizeof(str));
	std::cout << charray.data() << '\n';

	return 0;
}