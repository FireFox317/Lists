//==============================================================
// Filename : main.cpp
// Authors : Timon Kruiper & Dang Dinh Viet Anh
// Version : 1
// License :
// Description : Source file containing the main application
//==============================================================

#include "List.h"
#include <string>

// This function fills a list of char's with the content of a string
void fillList(std::string string, List<char> &list) {
	for (char& element : string) {
		list.insertAtBack(element);
	}
}

int main() {
	List<char> list1, list2;

	fillList("singlylinkedlist", list1);
	fillList("abcdefg", list2);

	list1.print();
	list2.print();

	List<char> list3, list4;
	
	fillList("hijklmnop", list3);
	fillList("qrstuvw", list4);

	list2.concatenate(list3);
	list2.concatenate(list4);

	list2.print();

	return 0;
}