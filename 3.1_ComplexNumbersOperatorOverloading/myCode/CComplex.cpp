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

float CComplex::abs() const
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

// Overloaded addition operator: complex + complex
CComplex CComplex::operator+(const CComplex &other) const
{
    return CComplex(m_real + other.m_real, m_imaginary + other.m_imaginary);
}

// Overloaded addition operator: complex + float
CComplex CComplex::operator+(float value) const
{
    return CComplex(m_real + value, m_imaginary);
}

// Overloaded addition operator: float + complex
CComplex operator+(float value, const CComplex &complex)
{
    return CComplex(value + complex.m_real, complex.m_imaginary);
}

// Overloaded subtraction operator: complex - complex
CComplex CComplex::operator-(const CComplex &other) const
{
    return CComplex(m_real - other.m_real, m_imaginary - other.m_imaginary);
}

// Overloaded subtraction operator: complex - float
CComplex CComplex::operator-(float value) const
{
    return CComplex(m_real - value, m_imaginary);
}

// Overloaded subtraction operator: float - complex
CComplex operator-(float value, const CComplex &complex)
{
    return CComplex(value - complex.m_real, -complex.m_imaginary);
}

// Overloaded multiplication operator: complex * complex
CComplex CComplex::operator*(const CComplex &other) const
{
    float resultReal = m_real * other.m_real - m_imaginary * other.m_imaginary;
    float resultImaginary = m_real * other.m_imaginary + m_imaginary * other.m_real;
    return CComplex(resultReal, resultImaginary);
}

// Overloaded multiplication operator: complex * float
CComplex CComplex::operator*(float value) const
{
    return CComplex(m_real * value, m_imaginary * value);
}

// Overloaded multiplication operator: float * complex
CComplex operator*(float value, const CComplex &complex)
{
    return CComplex(value * complex.getReal(), value * complex.getImaginary());
}

// Overloaded division operator: complex / complex
CComplex CComplex::operator/(const CComplex &other) const
{
    float denominator = other.m_real * other.m_real + other.m_imaginary * other.m_imaginary;
    float resultReal = (m_real * other.m_real + m_imaginary * other.m_imaginary) / denominator;
    float resultImaginary = (m_imaginary * other.m_real - m_real * other.m_imaginary) / denominator;
    return CComplex(resultReal, resultImaginary);
}

// Overloaded division operator: complex / float
CComplex CComplex::operator/(float value) const
{
    if (value != 0)
    {
        return CComplex(m_real / value, m_imaginary / value);
    }
    else
    {
        return 0;
    }
}

// Overloaded division operator: float / complex
CComplex operator/(float value, const CComplex &complex)
{
    float denominator = complex.getReal() * complex.getReal() + complex.getImaginary() * complex.getImaginary();
    float resultReal = (value * complex.getReal()) / denominator;
    float resultImaginary = (-value * complex.getImaginary()) / denominator;
    return CComplex(resultReal, resultImaginary);
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
