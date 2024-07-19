/*
 * SimpleList.cpp
 *
 *  Created on: 19 Jul 2024
 *      Author: mateo
 */

#include "SimpleList.h"

SimpleList::SimpleList()
{

}

void SimpleList::addNameAndNumber(std::string name, int number)
{
	list.emplace_back(name,number);
}

std::string SimpleList::trim(const std::string &source, const std::string &t)
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

std::string getDigits(const std::string& source)
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
	return list[pos].getNumber();
}

std::string SimpleList::getName(int pos) const
{
	return list[pos].getName();
}

void SimpleList::print() const
{
	for(auto& element: list)
	{
		std::cout << "Name: " << element.getName() << " Date: " << element.getNumber() << std::endl;
	}
}
