#pragma once
#include <iostream>
#include <string>

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

	~Book()
	{
		cout<<"Calling destructor"
	}

	string convert() {
		string s;
		s += name + " autrhor " + author + " number of pages " + to_string(num_pag);
	}
};
