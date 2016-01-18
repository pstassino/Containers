#include <iostream>
#include <vector>

int main()
{
	std::vector<int> myvector;
	std::vector<int>::iterator it;
	
	for (int i = 1; i <= 10; i++) 
		myvector.push_back(i);                 // set some values (from 1 to 10)

	std::cout << "myvector size: " << myvector.size() << std::endl;

	it = myvector.begin();
	it = myvector.insert(it, 20);             // inserts the element before the position pointed by it
	it = myvector.insert(it, 2, 30);

	std::cout << "myvector size: " << myvector.size() << std::endl;

	std::cout << "myvector contains:";
	for (unsigned i = 0; i < myvector.size(); ++i)
		std::cout << ' ' << myvector[i];
	std::cout << '\n';

	myvector.erase(myvector.begin() + 5);                    // erase the 6th element
	myvector.erase(myvector.begin(), myvector.begin() + 3);  // erase the first 3 elements:

	std::cout << "myvector contains:";
	for (unsigned i = 0; i < myvector.size(); ++i)
		std::cout << ' ' << myvector[i];
	std::cout << '\n';

	std::cout << "myvector size: " << myvector.size() << std::endl;

	return 0;
}