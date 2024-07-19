/*
 * SimpleListElement.h
 *
 *  Created on: 19 Jul 2024
 *      Author: mateo
 */

#ifndef SIMPLELISTELEMENT_H_
#define SIMPLELISTELEMENT_H_

#include <string>

class SimpleListElement
{
private:

	int number;
	std::string name;

public:

	SimpleListElement(std::string name, int number);
	std::string getName() const;
	int getNumber() const;

};

#endif /* SIMPLELISTELEMENT_H_ */
