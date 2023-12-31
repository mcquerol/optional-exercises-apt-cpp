/*
 * CCoordinate.h
 *
 *  Created on: 1 Dec 2023
 *      Author: robom
 */

#ifndef CCOORDINATE_H_
#define CCOORDINATE_H_

#include <math.h>
#include <iostream>

#define M_PI 3.14159265358979323846 /* pi */

class CCoordinate
{
private:
	float m_x;
	float m_y;
	float m_z;

	void getPolar(float &r, float &phi, float &theta);
	void getCylinder(float &r, float &phi, float &h);

public:

	enum t_coordinate
	{
		CARTESIAN,
		CYLINDER,
		POLAR
	};

	CCoordinate(float x = 0, float y = 0, float z = 0);
	~CCoordinate();

	void getCartesian(float &x, float &y, float &z);
	void setCartesian(float x, float y, float z);


	void add(const CCoordinate& c);
	void print(t_coordinate style);
};

#endif /* CCOORDINATE_H_ */
