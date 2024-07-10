// Standard (system) header files
#include <iostream>
#include <cstdlib>
// Add more standard header files as required
// #include <string>

using namespace std;
#include "CLifoBuffer.h"

int main ()
{
    // TODO: Add your program code here
	cout << "3.2_ExtensionAnRPNCalculator started." << endl << endl;

	    CLifoBuffer buffer(5); // Create a buffer with 5 elements

	    CFraction f1(1, 2);
	    CFraction f2(3, 4);
	    CFraction f3(5, 6);

	    buffer.push(f1);
	    buffer.push(f2);
	    buffer.push(f3);

	    buffer.print();

	    CFraction popResult;
	    buffer.pop(popResult);
	    std::cout << "Popped: " << popResult << std::endl;

	    buffer.print();

	return 0;
}
