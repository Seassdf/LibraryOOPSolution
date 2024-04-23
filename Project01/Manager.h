#pragma once
#include "Group.h"

class Manager
{
public:
	int getMaxPag(Group group);
	int getMinPag(Group group);
	double calcAvgPag(Group group);
	Book getLongstBook(Group group);
	Book getShortstBook(Group group);
};
