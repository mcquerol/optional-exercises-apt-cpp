/*
 * CLifoBuffer.cpp
 *
 *  Created on: 10 Jul 2024
 *      Author: mateo
 */

#include "CLifoBuffer.h"

CLifoBuffer::CLifoBuffer(int size)
{
	m_size = size;
	m_tos = -1;
	m_pBuffer = new CFraction[size];

	for(int i = 0; i < size; i++)
	{
		m_pBuffer[i] = CFraction(0,1);
	}
}

CLifoBuffer::~CLifoBuffer()
{
	delete m_pBuffer;
}

void CLifoBuffer::print() const
{
	for(int i = 0; i < m_size; i++)
	{
		std::cout << m_pBuffer[i] << std::endl;
	}
	std::cout << std::endl;
	std::cout << "m_size : " << m_size << std::endl;
	std::cout << "m_tos : " << m_tos << std::endl;
}

bool CLifoBuffer::push(const CFraction &data)
{
    if (m_tos < m_size - 1) // Check if there's space left
    {
        m_tos++;
        m_pBuffer[m_tos] = data;
        return true;
    }
    else
    {
        return false; // Stack is full
    }
}

bool CLifoBuffer::pop(CFraction &data)
{
    if (m_tos >= 0) // Check if the stack is not empty
    {
        data = m_pBuffer[m_tos];
        m_pBuffer[m_tos] = CFraction(0,1);
        m_tos--;
        return true;
    }
    else
    {
        return false; // Stack is empty
    }
}

