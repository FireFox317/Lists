#include "Tree.h"

#include <string>
#include <array>
#include <iostream>

int main() {
	Tree<int> tree1;
	//std::array<int, 10> integers = {5,3,9,2,8,4,7,0,6,1};
	std::array<int, 12> integers = {27,13,42,17,6,33,48,20,11,1,50,47};

	for (int element : integers) {
		tree1.insertNode(element);
	}

	int searchInt;
	std::cout << "Type a number to search it in the tree: ";
	std::cin >> searchInt;

	auto test = tree1.search(searchInt);
	if (test != nullptr) {
		std::cout << "Well done! Found the number." << "\n";
	}
	else {
		std::cout << "The number was not found!" << "\n";
	}

	tree1.outputTree();
	
	
	return 0;
}