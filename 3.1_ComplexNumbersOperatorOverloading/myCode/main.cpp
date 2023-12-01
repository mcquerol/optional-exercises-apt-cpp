#include <iostream>

#include "CComplex.h"


using namespace std;


int main ()
{
    // TODO: Add your program code here
	cout << "3.1_ComplexNumbersOperatorOverloading started." << endl << endl;


	CComplex c1;
	c1.print();
	CComplex c2(1,3);
	c2.print();
	CComplex c3(4);
	c3.print();
	CComplex c4(c3);
	c4.print();
	return 0;
}
