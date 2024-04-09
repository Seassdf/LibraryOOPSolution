#pragma once
#include <iostream>
#include <string>

using namespace std;

class Book
{
private:
	int num_pag;
	string author;
	string name;

public:

	Book() {
		num_pag = 100;
		author = "no name";
		name = "No name";
	}

	Book(int n_p, string ath, string nm) {
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
		cout << "Calling destructor";
	}

	string convert() {
		string s;
		s += name + " autrhor " + author + " number of pages " + to_string(num_pag);
	}

	string getName() {
		return name;
	}
	void getName(string nm) {
		name = nm;
	}

	int getNumPag() {
		return num_pag;
	}

	int setNumPag(int p) {
		if (p > 0) {
			return p;
		}
	}

	string getAuthor() {
		return author;
	}

	void setAuthor(string auth) {
		author = auth;
	}
};
