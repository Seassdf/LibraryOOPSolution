#pragma once
#include "Book.h"

class MyClass
{
public:
	int getMaxPag(Book* pages, int length) {
		int max = pages[0].getNumPag();

		for (int i = 0; i < length; i++)
		{
			if (pages[i].getNumPag() < max) {
				max = pages[i].getNumPag();
			}
		}

		return max;
	};


	int getMinPag(Book* pages,int length) {
		int min = pages[0].getNumPag();

		for (int i = 0; i < length; i++)
		{
			if (pages[i].getNumPag() < min) {
				min = pages[i].getNumPag();
			}
		}

		return min;
	};

	double calcAvgPag(Book* pages, int length) {
		int avg = pages[0].getNumPag();
		for (int i = 0; i < length; i++)
		{
			avg += pages[i].getNumPag();
		}


		return avg / length;
	}

	Book getLongstBook(Book* pages, int length) {
		double bestMark = getMaxPag(pages, length);
		Book st;

		for (int i = 0; i < length; i++)
		{
			if (pages[i].getNumPag() == bestMark) {
				st = pages[i];
				break;
			}
		}

		return st;
	}



};
