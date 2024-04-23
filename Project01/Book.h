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

	Book();

	Book(int n_p, string ath, string nm);

	Book(string nm);

	~Book();


	string convert();

	string getName();

	void getName(string nm);

	int getNumPag();

	int setNumPag(int p);

	string getAuthor();

	void setAuthor(string auth);
};
