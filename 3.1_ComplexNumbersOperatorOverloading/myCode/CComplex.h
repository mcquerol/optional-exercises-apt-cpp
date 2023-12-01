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
    CComplex(const CComplex &c);

    void set(float real, float imaginary);
    float abs() const; // Changed to const
    void print() const;
    CComplex &operator++();
    CComplex operator++(int);

    // Overloaded operators
    CComplex operator+(const CComplex &other) const;
    CComplex operator+(float value) const;
    friend CComplex operator+(float value, const CComplex &complex);

    CComplex operator-(const CComplex &other) const;
    CComplex operator-(float value) const;
    friend CComplex operator-(float value, const CComplex &complex);

    CComplex operator*(const CComplex &other) const;
    CComplex operator*(float value) const;
    friend CComplex operator*(float value, const CComplex &complex);

    CComplex operator/(const CComplex &other) const;
    CComplex operator/(float value) const;
    friend CComplex operator/(float value, const CComplex &complex);
};

#endif /* CCOMPLEX_H_ */
