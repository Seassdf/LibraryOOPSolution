#include <iostream>
#include "Manager.h"

using namespace std;

int main() {
	Group groupA;

	Book st{ "Alex",16,9 };

	groupA.add(st);

	cout << groupA.getInfo() << endl;
}