#pragma once
#include <iostream>

using namespace std;

class Book
{
public:
	int num_pag;
	string author;
	string name;

	Book() {
		num_pag = 100;
		author = "no name";
		name = "No name";
	}

	Book(int n_p,string ath,string nm) {
		num_pag = n_p;
		author = ath;
		name = nm;
	}

	Book(string nm) {
		num_pag = 0;
		author = "";
		name = nm;
	}
};
