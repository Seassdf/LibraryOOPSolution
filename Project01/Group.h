#pragma once
#include "Book.h"

class Group
{
private:
	Book list[30];
	int size = 0;

public:
	int getSize();
	bool add(Book book);
	Book get(int index);
	Book getInfo();

};

