/*
 * CComplex.cpp
 *
 *  Created on: 1 Dec 2023
 *      Author: robom
 */

#include "CComplex.h"

CComplex::CComplex(float real, float imaginary)
{
	if(real < - 100 || real > 100)
	{
		real = 0;
	}
    if(imaginary < - 100 || imaginary > 100)
	{
		imaginary = 0;
	}

    m_real = real;
    m_imaginary = imaginary;

}

CComplex::CComplex(const CComplex &c)
{

	if(c.m_real < - 100 || c.m_real > 100)
	{
		c.m_real = 0;
	}
    if(c.m_imaginary < - 100 || c.m_imaginary > 100)
	{
    	c.m_imaginary = 0;
	}

    m_real = c.m_real;
    m_imaginary = c.m_imaginary;
}

void CComplex::set(float real, float imaginary)
{

}

float CComplex::abs()
{

}

void CComplex::print() const
{

}

CComplex& CComplex::operator ++()
{

}

CComplex CComplex::operator ++(int)
{

}
