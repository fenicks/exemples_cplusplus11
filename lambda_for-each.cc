#include<iostream>
#include<vector>
#include<algorithm>

int main() {
	std::vector<std::string> data{"first", "second", "third"};
	// Print data vector before processing
	std::cout << "before:" << std::endl << " - ";
	for (const auto d : data) {
		std::cout << d << " ";
	}
	std::cout << std::endl;
	// Process data vector
	for_each(data.begin(), data.end(), [](std::string &item) {
		item += "_append";
	});
	// Print data vector after processing
	std::cout << "after:" << std::endl << " - ";
	for (const auto d : data) {
		std::cout << d << " ";
	}
	std::cout << std::endl;
	return 0;
}
