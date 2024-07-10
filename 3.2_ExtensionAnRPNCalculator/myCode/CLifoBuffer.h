/*
 * CLifoBuffer.h
 *
 *  Created on: 10 Jul 2024
 *      Author: mateo
 */

#ifndef CLIFOBUFFER_H_
#define CLIFOBUFFER_H_

#include "CFraction.h"

class CLifoBuffer
{

private:

	int m_size;
	int m_tos;
	CFraction* m_pBuffer;

public:

	CLifoBuffer(int size);
	~CLifoBuffer();


	void print() const;
	bool push(const CFraction& data);
	bool pop(CFraction& data);

};

#endif /* CLIFOBUFFER_H_ */
