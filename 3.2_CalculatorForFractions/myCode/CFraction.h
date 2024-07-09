/*
 * CFraction.h
 *
 *  Created on: 9 Jul 2024
 *      Author: mateo
 */

#ifndef CFRACTION_H_
#define CFRACTION_H_

class CFraction
{
private:

	long m_numerator;
	long m_denominator;

	void shorten();

public:
	CFraction();
	CFraction(long numerator, long denominator);
	void set(long numerator, long denominator);
	double toDouble() const;
	void print() const;

	/* operator overloads for Fraction + Fraction */
	CFraction operator+(const CFraction &f) const;
	CFraction operator-(const CFraction &f) const;
	CFraction operator*(const CFraction &f) const;
	CFraction operator/(const CFraction &f) const;

	/* operator overloads for Fraction + Integer */
	CFraction operator+(int value);
	CFraction operator-(int value);
	CFraction operator*(int value);
	CFraction operator/(int value);

	/* operator overloads for Integer + Fraction */
	friend CFraction operator+(int value, const CFraction &f);
	friend CFraction operator-(int value, const CFraction &f);
	friend CFraction operator*(int value, const CFraction &f);
	friend CFraction operator/(int value, const CFraction &f);

	CFraction& operator++();
	CFraction operator++(int);

};

#endif /* CFRACTION_H_ */
