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
    double sum = 0.0;
    int noValid = 0;

    for (const double& value : m_value)
    {
        if (value != NOVALUE)
        {
            sum += value;
            noValid++;
        }
    }

    if (noValid == 0)
    {
        // Avoid division by zero
        return NOVALUE;
    }

    return (sum / noValid);
}


double CSetOfMeasurementValues::getMax() const
{
    // Find the iterator pointing to the maximum element among valid values
    auto maxIterator = std::max_element(std::begin(m_value), std::end(m_value),
                                        [](double a, double b) {
                                            return a != NOVALUE && (b == NOVALUE || a > b);
                                        });

    // Check if any valid values were found
    if (maxIterator != std::end(m_value) && *maxIterator != NOVALUE)
    {
        // Return the maximum valid value
        return *maxIterator;
    }

    // If no valid values are found, return NOVALUE
    return NOVALUE;
}


double CSetOfMeasurementValues::getMin() const
{
    // Find the iterator pointing to the minimum element among valid values
    auto minIterator = std::min_element(std::begin(m_value), std::end(m_value),
                                        [](double a, double b) {
                                            return a != NOVALUE && (b == NOVALUE || a < b);
                                        });

    // Check if any valid values were found
    if (minIterator != std::end(m_value) && *minIterator != NOVALUE)
    {
        // Return the minimum valid value
        return *minIterator;
    }

    // If no valid values are found, return NOVALUE
    return NOVALUE;
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
