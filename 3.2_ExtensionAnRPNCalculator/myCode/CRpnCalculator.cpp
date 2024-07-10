/*
 * CRpnCalculator.cpp
 *
 *  Created on: 10 Jul 2024
 *      Author: mateo
 */

#include "CRpnCalculator.h"

bool CRpnCalculator::pushValue(const CFraction &data)
{
	return m_stack.push(data);
}

bool CRpnCalculator::popValue(CFraction &data)
{
	return m_stack.pop(data);
}

void CRpnCalculator::add()
{
	CFraction f1, f2, sum;
	if(m_stack.pop(f1) && m_stack.pop(f2))
	{
		sum = f1 + f2;
		m_stack.push(sum);
	}
	else
	{
		std::cerr << "ERROR, buffer empty" << std::endl;
	}
}

void CRpnCalculator::subtract()
{
	CFraction f1, f2, sum;
	if(m_stack.pop(f1) && m_stack.pop(f2))
	{
		sum = f2 - f1; //order matters
		m_stack.push(sum);
	}
	else
	{
		std::cerr << "ERROR, buffer empty" << std::endl;
	}
}

void CRpnCalculator::multiply()
{
	CFraction f1, f2, sum;
	if(m_stack.pop(f1) && m_stack.pop(f2))
	{
		sum = f1 * f2; //order matters
		m_stack.push(sum);
	}
	else
	{
		std::cerr << "ERROR, buffer empty" << std::endl;
	}
}

void CRpnCalculator::divide()
{
	CFraction f1, f2, sum;
	if(m_stack.pop(f1) && m_stack.pop(f2))
	{
		if(f1.toDouble() != 0.0)
		{
			sum = f2 / f1;
			m_stack.push(sum);
		}
		else
		{
			std::cerr << "ERROR, cannot divide by 0" << std::endl;
		}
	}
	else
	{
		std::cerr << "ERROR, buffer empty" << std::endl;
	}
}
