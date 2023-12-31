#include "CCoordinate.h"

CCoordinate::CCoordinate(float x, float y, float z)
{
    m_x = x;
    m_y = y;
    m_z = z;

    std::cout << "object " << this << " was created" << std::endl;
    std::cout << "x = " << m_x << std::endl;
    std::cout << "y = " << m_y << std::endl;
    std::cout << "z = " << m_z << std::endl;

    std::cout << "--------------------"  << std::endl;
}

CCoordinate::~CCoordinate()
{
    std::cout << "object " << this << " was destroyed" << std::endl;
}

void CCoordinate::getPolar(float &r, float &phi, float &theta)
{
    r = sqrt((m_x * m_x + m_y * m_y + m_z * m_z));

    if (m_y >= 0)
    {
        phi = acosf(m_x / (sqrt((m_x * m_x + m_y * m_y))));
    }
    else if (m_y < 0)
    {
        phi = acosf((2 * M_PI) - acosf(m_x / (sqrt((m_x * m_x + m_y * m_y)))));
    }

    theta = (M_PI / 2) - atanf((m_z / (sqrt((m_x * m_x + m_y * m_y)))));

    // Convert radians to degrees
    phi = phi * 180.0 / M_PI;
    theta = theta * 180.0 / M_PI;
}

void CCoordinate::getCylinder(float &r, float &phi, float &h)
{
    r = sqrt((m_x * m_x + m_y * m_y));

    if (m_x > 0)
    {
        phi = atanf(m_y / m_x);
    }
    else if (m_x < 0 && m_y >= 0)
    {
        phi = atanf(m_y / m_x) + M_PI;
    }
    else if (m_x < 0 && m_y < 0)
    {
        phi = atanf(m_y / m_x) - M_PI;
    }
    else if (m_x == 0 && m_y == 0)
    {
        phi = atanf(m_y / m_x) + (M_PI / 2);
    }

    h = m_z;

    // Convert radians to degrees
    phi = phi * 180.0 / M_PI;
}

void CCoordinate::getCartesian(float &x, float &y, float &z)
{
    x = m_x;
    y = m_y;
    z = m_z;
}

void CCoordinate::setCartesian(float x, float y, float z)
{
    m_x = x;
    m_y = y;
    m_z = z;
}

void CCoordinate::add(const CCoordinate& c)
{
    m_x += c.m_x;
    m_y += c.m_y;
    m_z += c.m_z;
}

void CCoordinate::print(t_coordinate style)
{
    float x, y, z, r, phi, h, theta;

    switch (style)
    {
    case CARTESIAN:
        getCartesian(x, y, z);
        std::cout << "x = " << x << std::endl;
        std::cout << "y = " << y << std::endl;
        std::cout << "z = " << z << std::endl;
        std::cout << std::endl;
        break;

    case CYLINDER:
        getCylinder(r, phi, h);
        std::cout << "r = " << r << std::endl;
        std::cout << "phi = " << phi << std::endl;
        std::cout << "h = " << h << std::endl;
        std::cout << std::endl;
        break;

    case POLAR:
        getPolar(r, phi, theta);
        std::cout << "r = " << r << std::endl;
        std::cout << "phi = " << phi << std::endl;
        std::cout << "theta = " << theta << std::endl;
        std::cout << std::endl;
        break;
    }
}
