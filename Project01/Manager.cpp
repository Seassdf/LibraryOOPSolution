#include "Manager.h"

int Manager::getMaxPag(Group group) {
	int max =group.get(0).getNumPag();

	for (int i = 0; i < group.getSize(); i++)
	{
		if (group.get(0).getNumPag() < max) {
			max = group.get(0).getNumPag();
		}
	}

	return max;
};


int  Manager::getMinPag(Group group) {
	int min = group.get(0).getNumPag();

	for (int i = 0; i < group.getSize(); i++)
	{
		if (group.get(0).getNumPag() < min) {
			min = group.get(0).getNumPag();
		}
	}

	return min;
};

double  Manager::calcAvgPag(Group group) {
	int avg = group.get(0).getNumPag();
	for (int i = 0; i < group.getSize(); i++)
	{
		avg += group.get(0).getNumPag();
	}


	return avg / group.getSize();
}

Book  Manager::getLongstBook(Group group) {
	double maxPages = getMaxPag(group);
	Book st;

	for (int i = 0; i < group.getSize(); i++)
	{
		if (group.get(0).getNumPag() == maxPages) {
			st = group.get(0);
			break;
		}
	}

	return st;
}


Book  Manager::getShortstBook(Group group) {
	double minPages = getMinPag(group);
	Book st;

	for (int i = 0; i < group.getSize(); i++)
	{
		if (group.get(0).getNumPag() == minPages) {
			st = group.get(0);
			break;
		}
	}

	return st;
}