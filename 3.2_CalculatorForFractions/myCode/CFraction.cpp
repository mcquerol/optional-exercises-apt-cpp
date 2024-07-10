/*
 * CFraction.cpp
 *
 *  Created on: 9 Jul 2024
 *      Author: mateo
 */

#include "CFraction.h"
#include <iostream>
#include <algorithm>

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

	shorten();
	/* make sure that the numerator is not less than 0 and the denominator is not less than 1 */

}

void CFraction::shorten() //simplify fraction
{
	long divisor = std::__gcd(std::abs(m_numerator), std::abs(m_denominator)); //find gcd

	m_numerator /= divisor;
	m_denominator /= divisor;

    // Ensure the denominator is positive
	m_denominator = std::abs(m_denominator);
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
	shorten();
	/* same conditions as constructor */
}

double CFraction::toDouble() const
{
	return static_cast<double>(m_numerator / m_denominator);
}

void CFraction::print() const
{
	std::cout << "Fraction[nominator=" << m_numerator << "; denominator=" << m_denominator <<"]" << std::endl;
}

CFraction CFraction::operator +(const CFraction &other) const
{
	long num = m_numerator * other.m_denominator + other.m_numerator * m_denominator;
	long denom = m_denominator * other.m_denominator;
	CFraction result(num, denom);
	result.shorten();
	return result;
}

CFraction CFraction::operator -(const CFraction &other) const
{
	long num = m_numerator * other.m_denominator - other.m_numerator * m_denominator;
	long denom = m_denominator * other.m_denominator;
	CFraction result(num, denom);
	result.shorten();
	return result;
}

CFraction CFraction::operator *(const CFraction &other) const
{
	long num = m_numerator * other.m_numerator;
	long denom = m_denominator * other.m_denominator;
	CFraction result(num, denom);
	result.shorten();
	return result;
}

CFraction CFraction::operator /(const CFraction &other) const
{
	long num = m_numerator * other.m_denominator;
	long denom = m_denominator * other.m_numerator;
	CFraction result(num, denom);
	result.shorten();
	return result;
}

CFraction CFraction::operator+(int value) const
{
	CFraction result(m_numerator + (value * m_denominator), m_denominator);
	result.shorten();
	return result;
}

CFraction CFraction::operator-(int value) const
{
	CFraction result(m_numerator - value * m_denominator, m_denominator);
	result.shorten();
	return result;
}

CFraction CFraction::operator*(int value) const
{
	CFraction result(m_numerator * value, m_denominator);
	result.shorten();
	return result;
}

CFraction CFraction::operator/(int value) const
{
	CFraction result(m_numerator, value * m_denominator);
	result.shorten();
	return result;
}

CFraction operator+(int value, const CFraction &other)
{
	CFraction result(other.m_numerator + (value * other.m_denominator), other.m_denominator);
	result.shorten();
	return result;
}

CFraction operator-(int value, const CFraction &other)
{
	CFraction result((value * other.m_denominator) - other.m_numerator, other.m_denominator);
	result.shorten();
	return result;
}

CFraction operator*(int value, const CFraction &other)
{
	CFraction result(other.m_numerator * value, other.m_denominator);
	result.shorten();
	return result;
}

CFraction operator/(int value, const CFraction &other)
{
	CFraction result(other.m_denominator * value, other.m_numerator);
	result.shorten();
	return result;
}


CFraction& CFraction::operator++() {
    m_numerator += m_denominator;
    shorten(); // Simplify after incrementing
    return *this;
}

// Post-increment operator
CFraction CFraction::operator++(int) {
    CFraction temp(*this);
    ++(*this); // Use pre-increment to increment and simplify
    return temp;
}

std::ostream& operator<<(std::ostream& out, const CFraction& fraction) {

	 out << fraction.m_numerator << "/" << fraction.m_denominator;
	 return out;
}
