#include "List.h"
#include "ListNode.h"

#include <string>

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
	list3.print();
	list4.print();


	return 0;
}