#include "CFraction.h"
#include <iostream>

int main() {
    std::cout << "3.2_CalculatorForFractions started." << std::endl << std::endl;

    CFraction f1;
    CFraction f2(1, 3);
    CFraction f3(24, 3);
    CFraction f4(14, 28);

    f1.print();
    f2.print();
    f3.print();
    f4.print(); // Should print Fraction[numerator=1; denominator=2]

    CFraction f5 = f2 + f3;
    f5.print(); // Addition of two fractions

    CFraction f6 = f2 + 1;
    f6.print(); // Addition of fraction and integer

    CFraction f7 = 1 + f2;
    f7.print(); // Addition of integer and fraction

    CFraction f8 = f3 - f2;
    f8.print(); // Subtraction of two fractions

    CFraction f9 = f2 - 1;
    f9.print(); // Subtraction of fraction and integer

    CFraction f10 = 1 - f2;
    f10.print(); // Subtraction of integer and fraction


    CFraction f11 = f2 * f3;
    f11.print(); // Multiplication of two fractions

    CFraction f12 = f2 * 2;
    f12.print(); // Multiplication of fraction and integer

    CFraction f13 = 2 * f2;
    f13.print(); // Multiplication of integer and fraction

    CFraction f14 = f3 / f2;
    f14.print(); // Division of two fractions

    CFraction f15 = f3 / 2;
    f15.print(); // Division of fraction and integer

    CFraction f16 = 2 / f3;
    f16.print(); // Division of integer and fraction

    std::cout << "(3/4)+(2/3) = " << CFraction(3, 4) + CFraction (2, 3) << std::endl;
    // Add more testcases as needed!

    CFraction f(1, 3);
    CFraction g;
    g = ++f;

    std::cout << g;

    return 0;
}
