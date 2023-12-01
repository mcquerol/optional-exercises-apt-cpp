/*
 * CCSetOfMeasurementValues.h
 *
 *  Created on: 1 Dec 2023
 *      Author: robom
 */

#ifndef CSETOFMEASUREMENTVALUES_H_
#define CSETOFMEASUREMENTVALUES_H_

#include <iostream>
#include <string.h>
#include <algorithm>
#include <ctime>

#define MAXVALUE	10
#define NOVALUE		-9999

class CSetOfMeasurementValues
{

public:

	enum t_unit
	{
		A,
		V,
		S,
		W,
		NONE
	};

	CSetOfMeasurementValues(std::string name, t_unit unit);

	void setValue(unsigned int pos, double value);
	void setRandomValues(int min, int max);
	void print() const;
	double getValue(unsigned int pos) const;
	double getAverage() const;
	double getMax() const;
	double getMin() const;


private:

	double m_value[10];
	t_unit m_unit;
	std::string m_name;

	void printSingleValue(unsigned int pos) const;

};

#endif /* CSETOFMEASUREMENTVALUES_H_ */
