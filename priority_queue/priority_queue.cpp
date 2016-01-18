#include <iostream>       // std::cout
#include <queue>          // std::priority_queue
#include <vector>         // std::vector
#include <functional>     // std::greater, std::less

class mycomparison {
	bool reverse;
public:
	mycomparison(const bool& revparam = false) {
		reverse = revparam;
	}
	bool operator() (const int& lhs, const int& rhs) const {
		if (reverse) 
			return (lhs > rhs);
		else 
			return (lhs < rhs);
	}
};

int main() {
	int myints[] = { 10, 60, 50, 20 };

	std::priority_queue<int> first;
	std::priority_queue<int> second(myints, myints + 4);   //default: less-than comparison. The greatest element on the top
	std::priority_queue<int, std::vector<int>, std::greater<int> > third(myints, myints + 4);
	std::priority_queue<int, std::vector<int>, std::less<int> > fourth(myints, myints + 4);
	
	// using mycomparison:
	typedef std::priority_queue<int, std::vector<int>, mycomparison> mypq_type;

	mypq_type fifth(myints, myints + 4, mycomparison(true));       // greater-than comparison
	mypq_type sixth(myints, myints + 4);                           // less-than comparison

	while (!second.empty()) {
		std::cout << ' ' << second.top();
		second.pop();
	}
	std::cout << '\n';

	while (!third.empty()) {
		std::cout << ' ' << third.top();
		third.pop();
	}
	std::cout << '\n';

	while (!fourth.empty()) {
		std::cout << ' ' << fourth.top();
		fourth.pop();
	}
	std::cout << '\n';

	while (!fifth.empty()) {
		std::cout << ' ' << fifth.top();
		fifth.pop();
	}
	std::cout << '\n';

	while (!sixth.empty()) {
		std::cout << ' ' << sixth.top();
		sixth.pop();
	}

	return 0;
}