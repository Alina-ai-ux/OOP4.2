#include "Progression.h"
#include "Arithmeticprogression.h"
#include "Geometricprogression.h"
#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
	Arithmeticprogression* ap = new Arithmeticprogression;
	Progression* p = ap;
	cout << typeid(p).name() << endl;
	cout << typeid(*p).name() << endl;
	delete ap;
	Geometricprogression* gp = new Geometricprogression;
	Progression* p1 = gp;
	cout << typeid(p1).name() << endl;
	cout << typeid(*p1).name() << endl;
	delete gp;
	return 0;
};
