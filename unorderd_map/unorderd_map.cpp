#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
	std::unordered_map<std::string, double> myumap{ { "mom", 5.4 }, { "dad", 6.1 }, { "bro", 5.9 } };
	std::string input;

	// myumap.rehash(20);

	std::cout << "Who ? ";
	getline(std::cin, input);

	std::unordered_map<std::string, double>::const_iterator it = myumap.find(input);

	if (it == myumap.end())
		std::cout << input << " not found";
	else
		std::cout << it->first << " is " << it->second;

	std::cout << std::endl;

	myumap.insert(std::pair<std::string, double>("son", 5.6));
	myumap["dau"] = 5.1;

	for (auto& x : myumap){
		std::cout << x.first << " " << x.second << std::endl;
	}
	for (unsigned i = 0; i < myumap.bucket_count(); ++i){
		std::cout << myumap.bucket_size(i);
	}
	return 0;
}
