/*
 * PhoneListElement.cpp
 *
 *  Created on: 19 Jul 2024
 *      Author: mateo
 */

#include "PhoneListElement.h"

PhoneListElement::PhoneListElement(std::string name, int number): name(name)
{
	numbers.push_back(number);
}

std::string PhoneListElement::getName() const
{
	return name;
}

int PhoneListElement::getNoNumber() const
{
	return numbers.size();
}

int PhoneListElement::getNumber(int index) const
{
	return numbers[index];
}

void PhoneListElement::addNumber(int number)
{
	numbers.push_back(number);
}

bool PhoneListElement::numberInList(int number) const
{
	if (std::find(numbers.begin(), numbers.end(), number) != numbers.end())
	{
		return true;
	}
	else
	{
		return false;
	}
}
