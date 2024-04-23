#include "Group.h"

int Group::getSize() {
	return size;
}

bool Group::add(Book book) {
	if (size < 30) {
		list[size] = book;
		size++;
		return true;
	}
	else { return false; }
}

//Book Group::get(int index) {
//	if (index <= 0 && index < size) {
//		return list[index];
//	}
//	return NULL;
//}

Book Group::getInfo() {
	string st = "List of books:";
	for (int i = 0; i < size; i++)
	{
		st += "\n" + to_string(i + 1);
		st += list[i].convert();
	}
}
