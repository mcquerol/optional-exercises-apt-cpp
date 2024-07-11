/*
 * CRpnCalculator.h
 *
 *  Created on: 10 Jul 2024
 *      Author: mateo
 */

#ifndef CRPNCALCULATOR_H_
#define CRPNCALCULATOR_H_

#include "CLifoBuffer.h"

class CRpnCalculator
{
private:
	CLifoBuffer m_stack;
public:
	CRpnCalculator(int size);

	bool pushValue(const CFraction& data);
	bool popValue(CFraction& data);

	void add();
	void subtract();
	void multiply();
	void divide();
};

#endif /* CRPNCALCULATOR_H_ */
