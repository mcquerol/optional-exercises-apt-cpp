
#include <iostream>

using namespace std;

#include "CLifoBuffer.h"
#include "CRpnCalculator.h"

int main ()
{
    // TODO: Add your program code here
	cout << "3.2_ExtensionAnRPNcalc started." << endl << endl;

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

	    std::cout << " -------RPN CALCULATOR BELOW------- " << std::endl;

	    CRpnCalculator calc(5); // size of 5
	    CFraction f4(5,2), f5(6,5), f6(1,2), f7(1,3), f8(1,6), f9(1,4);

		// Evaluating the numerator: (5/2 * 6/5 + 1/2 - 1/3)
		calc.pushValue(CFraction(5, 2));
		calc.pushValue(CFraction(6, 5));
		calc.multiply(); // 5/2 * 6/5
		calc.pushValue(CFraction(1, 2));
		calc.add();      // (5/2 * 6/5) + 1/2
		calc.pushValue(CFraction(1, 3));
		calc.subtract(); // ((5/2 * 6/5) + 1/2) - 1/3

		// Evaluating the denominator: 5 + 1/6 + 11/4
		calc.pushValue(CFraction(5, 1));
		calc.pushValue(CFraction(1, 6));
		calc.add();      // 5 + 1/6
		calc.pushValue(CFraction(11, 4));
		calc.add();      // (5 + 1/6) + 11/4

		// Final division: numerator / denominator
		calc.divide();   // ((5/2 * 6/5 + 1/2 - 1/3) / (5 + 1/6 + 11/4))

		// Pop and print the result
		CFraction result;
		if (calc.popValue(result)) {
			std::cout << "Result: " << result << std::endl;
		} else {
			std::cerr << "Error: failed to pop result from calc." << std::endl;
		}

		return 0;
}
