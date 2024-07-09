#include <iostream>
#include "CFraction.h"

int main ()
{
    // TODO: Add your program code here
	std::cout << "3.2_CalculatorForFractions started." << std::endl << std::endl;

	CFraction f1;
	CFraction f2(1,3);
	CFraction f3(24, 3);

	f1.print();
	f2.print();
	f3.print();


	return 0;
}
