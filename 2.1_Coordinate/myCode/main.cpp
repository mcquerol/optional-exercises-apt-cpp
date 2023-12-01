
#include <iostream>
#include "CCoordinate.h"

using namespace std;


int main ()
{
    // TODO: Add your program code here
	cout << "2.1_Coordinate started." << endl << endl;

	CCoordinate c1(4,4,2);
	CCoordinate c2;
	CCoordinate c3(-4);

	c1.print(CCoordinate::CARTESIAN);
	c1.print(CCoordinate::CYLINDER);
	c2.print(CCoordinate::CYLINDER);
	c1.print(CCoordinate::POLAR);
	c2.print(CCoordinate::POLAR);
	c3.print(CCoordinate::POLAR);

	c1.add(c3);
	c2.add(CCoordinate(1,2,3));
	c1.print(CCoordinate::CARTESIAN);
	c2.print(CCoordinate::CARTESIAN);

	/* TODO add illegal cases to prevent nan (show warnining and set val to 0)
	 * change output to make it more clear in the console
	 * add doxygen comments
	 */

	return 0;
}
