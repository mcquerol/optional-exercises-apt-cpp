/*
 * CComplex.cpp
 *
 *  Created on: 1 Dec 2023
 *      Author: robom
 */

#include "CComplex.h"
#include <iostream>

CComplex::CComplex(float real, float imaginary)
{
	if(real < -100 || real > 100)
	{
		real = 0;
	}
    if(imaginary < -100 || imaginary > 100)
	{
		imaginary = 0;
	}

    m_real = real;
    m_imaginary = imaginary;

    std::cout << "Created object at address: " << this << std::endl;

}

CComplex::CComplex(const CComplex &c)
{

	if(c.m_real < -100 || c.m_real > 100)
	{
		m_real = 0;
	}
    if(c.m_imaginary < -100 || c.m_imaginary > 100)
	{
    	m_imaginary = 0;
	}

    m_real = c.m_real;
    m_imaginary = c.m_imaginary;

    std::cout << "Created object at address: " << this << std::endl;
}

void CComplex::set(float real, float imaginary)
{
	if(real < -100 || real > 100)
	{
		real = 0;
	}
    if(imaginary < -100 || imaginary > 100)
	{
		imaginary = 0;
	}

    m_real = real;
    m_imaginary = imaginary;

}

float CComplex::abs()
{
	if(m_real < 0)
	{
		return m_real * -1;
	}
	else
	{
		return m_real;
	}

}

void CComplex::print() const
{
	std::cout << m_real << " + " << m_imaginary << "i" << std::endl;
}

//CComplex& CComplex::operator ++()
//{
//
//}
//
//CComplex CComplex::operator ++(int)
//{
//
//}
