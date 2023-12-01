#include <iostream>

#include "CSetOfMeasurementValues.h"

using namespace std;

int main ()
{
    // TODO: Add your program code here
	cout << "2.2_SetOfMeasurementValues started." << endl << endl;

	CSetOfMeasurementValues myVoltageValues("myVoltageValues",CSetOfMeasurementValues::V);
	myVoltageValues.setValue(1,10);
	myVoltageValues.setValue(3,20);
	myVoltageValues.print();

	myVoltageValues.setValue(30, 20);
	myVoltageValues.getValue(77);


	return 0;
}
