/*
 * PhoneListElement.h
 *
 *  Created on: 19 Jul 2024
 *      Author: mateo
 */

#ifndef PHONELISTELEMENT_H_
#define PHONELISTELEMENT_H_

#include <string>
#include <vector>

class PhoneListElement
{
private:

	std::vector<int> number;
	std::string name;

public:

	PhoneListElement(std::string name, int number);
	std::string getName() const;
	int getNoNumber() const;
	int getNumber(int index) const;
	void addNumber(int number) const;
	bool numberInList(int number) const;

};

#endif /* PHONELISTELEMENT_H_ */
