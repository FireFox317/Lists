//==============================================================
// Filename : main.cpp
// Authors : Timon Kruiper & Dang Dinh Viet Anh
// Version : 1
// License :
// Description : Source file containing the main application.
//==============================================================

#include "Tree.h"
#include <string>
#include <array>
#include <iostream>

int main() {
	Tree<int> tree1;

	// insert 10 integers in the tree
	std::array<int, 10> integers = {5,4,6,8,1,9,3,7,2,0};
	for (int element : integers) {
		tree1.insertNode(element);
	}

	// using search function of the Tree class to find a element in a tree
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

	// print the tree in a nice format
	tree1.outputTree();
	
	return 0;
}