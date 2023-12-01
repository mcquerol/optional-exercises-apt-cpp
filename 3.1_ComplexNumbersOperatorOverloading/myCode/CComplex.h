/*
 * CComplex.h
 *
 *  Created on: 1 Dec 2023
 *      Author: robom
 */

#ifndef CCOMPLEX_H_
#define CCOMPLEX_H_

class CComplex
{
	private:
		float m_real;
		float m_imaginary;

	public:
		CComplex(float real = 0, float imaginary = 0);
		CComplex(CComplex const& c);

		void set(float real, float imaginary);
		float abs();
		void print() const;
		CComplex& operator++();
		CComplex operator++(int);

};

#endif /* CCOMPLEX_H_ */
