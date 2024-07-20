/*
 * SimpleList.cpp
 *
 *  Created on: 19 Jul 2024
 *      Author: mateo
 */

#include "SimpleList.h"

SimpleList::SimpleList() {}

void SimpleList::addNameAndNumber(std::string name, int number)
{
	list.emplace_back(name,number);
}

std::string SimpleList::trim(const std::string &source, const std::string &t) const
{
    // Find the first position that is not a trim character
    size_t start = source.find_first_not_of(t);
    // Find the last position that is not a trim character
    size_t end = source.find_last_not_of(t);

    // If all characters are to be trimmed, return an empty string
    if (start == std::string::npos)
    {
        return "";
    }

    return source.substr(start, end - start + 1);
}

std::string SimpleList::getDigits(const std::string& source) const
{
    std::string result;
    for(char c : source)
    {
    	if(std::isdigit(c))
    	{
    		result+=c;
    	}
    }
    return result;
}

int SimpleList::size() const
{
	return list.size();
}

int SimpleList::getNumber(int pos) const
{
    int number = list[pos].getNumber();

    std::string cleanedNumberStr = getDigits(std::to_string(number));
    return std::stoi(cleanedNumberStr);
}

std::string SimpleList::getName(int pos) const
{
	std::string name = list[pos].getName();
	return trim(name," ");
}

void SimpleList::print() const
{
	for(auto& element: list)
	{
		std::cout << "Name: " << element.getName() << " Date: " << element.getNumber() << std::endl;
	}
}
