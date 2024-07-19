/*
 * SimpleListElement.cpp
 *
 *  Created on: 19 Jul 2024
 *      Author: mateo
 */

#include "SimpleListElement.h"

SimpleListElement::SimpleListElement(std::string name, int number) : name(name), number(number){}

std::string SimpleListElement::getName() const
{
	return name;
}

int SimpleListElement::getNumber() const
{
	return number;
}
