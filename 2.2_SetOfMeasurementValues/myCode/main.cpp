#include <iostream>

#include "CSetOfMeasurementValues.h"

using namespace std;

int main ()
{
    // TODO: Add your program code here
	cout << "2.2_SetOfMeasurementValues started." << endl << endl;
	srand(time(NULL));
	CSetOfMeasurementValues myVoltageValues("myVoltageValues",CSetOfMeasurementValues::V);
	myVoltageValues.setValue(1,10);
	myVoltageValues.setValue(3,20);
	myVoltageValues.print();

	myVoltageValues.setValue(30, 20);
	myVoltageValues.getValue(77);

	CSetOfMeasurementValues myCurrentValues("myCurrentValues",CSetOfMeasurementValues::A);
	myCurrentValues.setRandomValues(0,100);
	myCurrentValues.print();

	//TODO check the getmin function and output NOVALUE after the cerr
	return 0;
}
