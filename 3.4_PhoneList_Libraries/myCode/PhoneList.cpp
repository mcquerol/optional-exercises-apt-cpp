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
	pos = 0; //random value initialise

	for(int i = 0; i < list.size(); i++) //TODO check this warning
	{
		if(list[i].getName() == name)
		{
			pos = i;
			return true;
		}
	}
	return true;
}

std::string PhoneList::numberDoubled(std::string name, int number) const
{
	//TODO make sure the numberDoubled method works
//	int count = 0;
//
//	for(const auto& element : list)
//	{
//		if(element.getName() == name)
//		{
//			count++;
//		}
//	}
//
//	if(count > 1)
//	{
//		return "Duplicate";
//	}
//	else
//	{
//		return "No duplicate";
//	}

	return name; //temp return
}

void PhoneList::readAndTransformSimpleList(SimpleList &simpleList)
{

	list.clear();

	for(int i = 0; i < simpleList.size(); i++)
	{
		std::string name = simpleList.getName(i);
		int number = simpleList.getNumber(i);
		list.emplace_back(name,number);
	}

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

void PhoneList::readFromFile(std::string fileName)
{

	std::ifstream file(fileName);
	if (!file.is_open()) {
		// Handle error
		std::cerr << "Unable to open file: " << fileName << std::endl;
		return;
	}

	std::string line;
	// Use a while loop together with the getline() function to read the file line by line
	while (std::getline(file, line))
	{
        std::istringstream iss(line);
        std::string name;
        std::string number;

        if (std::getline(iss, name, ';') && std::getline(iss, number))
        {
            list.emplace_back(name,number);
        }
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
