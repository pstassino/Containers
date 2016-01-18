#include <iostream>
#include <string>
#include <array>
#include <unordered_set>

int main()
{
	std::unordered_set<std::string> myset = { "USA", "France", "Spain", "UK", "Russia"};
	std::array<std::string, 3> myarray = { "Germany", "Italy", "Portugal" };

	myset.insert("Greece");                         // copy insertion
	myset.insert(myarray.begin(), myarray.end());   // range insertion

	std::cout << "myset contains:";
	for (const std::string& x : myset)
		std::cout << " " << x;
	std::cout << std::endl;

	std::cout << "myset has " << myset.bucket_count() << " buckets.\n";

	for (const std::string& x : myset) {
		std::cout << x << " is in bucket #" << myset.bucket(x) << std::endl;
	}

	myset.erase(myset.begin());                    // erasing by iterator
	myset.erase("France");                         // erasing by key
	myset.erase(myset.find("UK"), myset.end());    // erasing by range

	std::cout << "myset contains:";
	for (const std::string& x : myset) 
		std::cout << " " << x;
	std::cout << std::endl;

	return 0;
}