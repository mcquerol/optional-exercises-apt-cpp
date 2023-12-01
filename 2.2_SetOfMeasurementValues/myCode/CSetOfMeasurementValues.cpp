/*
 * CSetOfMeasurementValues.cpp
 *
 *  Created on: 1 Dec 2023
 *      Author: robom
 */

#include "CSetOfMeasurementValues.h"

CSetOfMeasurementValues::CSetOfMeasurementValues(std::string name, t_unit unit)
{
	m_name = name;
	m_unit = unit;

	for(int i = 0; i < 10; i++)
	{
		m_value[i] = NOVALUE;
	}

	std::cout << "object created at " << this << std::endl;
}

void CSetOfMeasurementValues::setValue(unsigned int pos, double value)
{
	if(pos < 0 || pos > 10)
	{
		std::cerr << "OUT OF BOUNDS, " << value << " was not added " << "at position" << pos << std::endl;
	}
	else
	{
		m_value[pos] = value;
	}

}

void CSetOfMeasurementValues::setRandomValues(int min, int max)
{

}

void CSetOfMeasurementValues::print() const
{

}

double CSetOfMeasurementValues::getValue(unsigned int pos) const
{
	if(pos < 0 || pos > 10)
	{
		return NOVALUE;
	}

	return m_value[pos];
}

double CSetOfMeasurementValues::getAverage() const
{
	return 0.0;
}

double CSetOfMeasurementValues::getMax() const
{
	return 0.0;
}

double CSetOfMeasurementValues::getMin() const
{
	return 0.0;
}

void CSetOfMeasurementValues::printSingleValue(unsigned int pos) const
{
	std::string tempUnit;

	switch(m_unit)
	{
		case A:
			tempUnit = " Ampere";
			break;
		case V:
			tempUnit = " Volt";
			break;
		case S:
			tempUnit = " Seconds";
			break;
		case W:
			tempUnit = " Watts";
			break;
		case NONE:
			tempUnit = "NONE";
			break;
	}

	std::cout << "The value at position " << pos <<" is "<< m_value << tempUnit << std::endl;
}
