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
	CFraction(long numerator, long denominator);
	void set(long numerator, long denominator);
	double toDouble() const;
	void print() const;
	CFraction& operator++();
	CFraction& operator++(int);

};

#endif /* CFRACTION_H_ */
