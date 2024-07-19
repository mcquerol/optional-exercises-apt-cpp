/*
 * SimpleList.h
 *
 *  Created on: 19 Jul 2024
 *      Author: mateo
 */

#ifndef SIMPLELIST_H_
#define SIMPLELIST_H_

#include <string>

#include "SimpleListElement.h"

class SimpleList
{

private:

	std::vector<SimpleListElement> list;

	void addNameAndNumber(std::string name, int number);
	std::string trim(const std::string& source, const std::string& t);
	std::string getDigits(const std::string&) const;

public:

	SimpleList();
	int size() const;

	int getNumber(int pos) const;
	std::string getName(int pos) const;
	void print() const;

};

#endif /* SIMPLELIST_H_ */
