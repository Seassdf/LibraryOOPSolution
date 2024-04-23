#include "Book.h"

Book::Book() {
	num_pag = 100;
	author = "no name";
	name = "No name";
}

Book::Book(int n_p, string ath, string nm) {
	num_pag = n_p;
	author = ath;
	name = nm;
}

Book::Book(string nm) {
	num_pag = 0;
	author = "";
	name = nm;
}

Book::~Book()
{
	cout << "Calling destructor";
}

string Book::convert() {
	string s;
	s += name + " autrhor " + author + " number of pages " + to_string(num_pag);
}

string Book::getName() {
	return name;
}
void Book::getName(string nm) {
	name = nm;
}

int Book::getNumPag() {
	return num_pag;
}

int Book::setNumPag(int p) {
	if (p > 0) {
		return p;
	}
}

string Book::getAuthor() {
	return author;
}

void Book::setAuthor(string auth) {
	author = auth;
}