/*
 * PhoneList.h
 *
 *  Created on: 19 Jul 2024
 *      Author: mateo
 */

#ifndef PHONELIST_H_
#define PHONELIST_H_

#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

#include "PhoneListElement.h"
#include "SimpleList.h"

class PhoneList
{
private:

	std::vector<PhoneListElement> list;
	bool nameExists(std::string name, int& pos) const;
	std::string numberDoubled(std::string name, int number) const;

public:

	PhoneList();
	void readAndTransformSimpleList(SimpleList& simpleList);
	void readFromFile(std::string fileName);
	void saveListToFile(std::string fileName);
	void print() const;

};

#endif /* PHONELIST_H_ */
