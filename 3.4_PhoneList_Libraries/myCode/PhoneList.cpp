/*
 * PhoneList.cpp
 *
 *  Created on: 19 Jul 2024
 *      Author: mateo
 */

#include "PhoneList.h"

PhoneList::PhoneList(){}

bool PhoneList::nameExists(std::string name, int &pos) const
{

	return true;
}

std::string PhoneList::numberDoubled(std::string name, int number) const
{

	return allocator
}


void PhoneList::readAndTransformSimpleList(SimpleList &simpleList)
{

}

void PhoneList::saveListToFile(std::string fileName)
{
	std::ofstream file(fileName);
	if (!file.is_open()) {
		// Handle error
		std::cerr << "Unable to open file: " << fileName << std::endl;
		return;
	}

	// Write to the file
	for(const auto& element: list)
	{
		file << element.getName() << "; ";
		for(int i = 0; i < element.getNoNumber(); i++)
		{
			file << element.getNumber(i) << ";";
			if (i < element.getNoNumber() - 1) {
				file << "; "; // Separate multiple numbers with a comma
			}
		}
		file << std::endl;
	}

	file.close();
}

void PhoneList::print() const
{
	for(const auto& element: list)
	{
		std::cout << element.getName() << "; ";
		for(int i = 0; i < element.getNoNumber(); i++)
		{
			std::cout << element.getNumber(i) << "; ";
			if (i < element.getNoNumber() - 1) {
				std::cout << "; "; // Separate multiple numbers with a comma
			}
		}
		std::cout << std::endl;
	}
}
