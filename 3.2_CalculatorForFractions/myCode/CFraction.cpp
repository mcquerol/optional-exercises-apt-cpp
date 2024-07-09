/*
 * CFraction.cpp
 *
 *  Created on: 9 Jul 2024
 *      Author: mateo
 */

#include "CFraction.h"
#include <iostream>

// Default constructor
CFraction::CFraction() : m_numerator(0), m_denominator(1) {}
CFraction::CFraction(long numerator = 0, long denominator = 1)
{
	if(numerator < 0)
	{
		m_numerator = 0;
	}
	if(denominator < 1)
	{
		m_denominator = 1;
	}

	m_numerator = numerator;
	m_denominator = denominator;

	/* make sure that the numerator is not less than 0 and the denominator is not less than 1 */

}


void CFraction::shorten() //gcd
{
    while (m_denominator != 0)
    {
        long t = m_denominator;
        m_denominator = m_numerator % m_denominator;
        m_numerator = t;
    }
}


void CFraction::set(long numerator, long denominator)
{
	if(numerator < 0)
	{
		m_numerator = 0;
	}
	if(denominator < 1)
	{
		m_denominator = 1;
	}

	m_numerator = numerator;
	m_denominator = denominator;

	/* same conditions as constructor */
}

double CFraction::toDouble() const
{
	return 0.0;
}

void CFraction::print() const
{
	std::cout << "Fraction[nominator=" << m_numerator << "; denominator=" << m_denominator <<"]" << std::endl;
}

/* implement later */

//CFraction& CFraction::operator++()
//{
//
//}

//CFraction& CFraction::operator++(int)
//{
//
//}
