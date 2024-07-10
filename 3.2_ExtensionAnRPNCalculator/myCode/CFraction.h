/*
 * CFraction.h
 *
 *  Created on: 9 Jul 2024
 *      Author: mateo
 */

#ifndef CFRACTION_H_
#define CFRACTION_H_

#include <iostream>

class CFraction
{
private:

	long m_numerator;
	long m_denominator;

public:
	void shorten();

public:
	CFraction();
	CFraction(long numerator, long denominator);
	void set(long numerator, long denominator);
	double toDouble() const;
	void print() const;

	/* operator overloads for Fraction + Fraction */
	CFraction operator+(const CFraction &other) const;
	CFraction operator-(const CFraction &other) const;
	CFraction operator*(const CFraction &other) const;
	CFraction operator/(const CFraction &other) const;

	/* operator overloads for Fraction + Integer */
	CFraction operator+(int value) const;
	CFraction operator-(int value) const;
	CFraction operator*(int value) const;
	CFraction operator/(int value) const;

	/* operator overloads for Integer + Fraction */
	friend CFraction operator+(int value, const CFraction &other);
	friend CFraction operator-(int value, const CFraction &other);
	friend CFraction operator*(int value, const CFraction &other);
	friend CFraction operator/(int value, const CFraction &other);

	CFraction& operator++();
	CFraction operator++(int);

	friend std::ostream& operator <<(std::ostream& out, const CFraction& fraction);

};

#endif /* CFRACTION_H_ */
