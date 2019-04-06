#include "point.h"

// Constructs a Point(0,0) object.
Point::Point()
{

}

// Constructs a Point obect.
Point::Point(const int x, const int y)
    : m_x(x)
    , m_y(y)
{

}

// Copy constructor.
Point::Point(const Point &pt)
    : m_x(pt.x())
    , m_y(pt.y())
{

}

// Calculates the horizontally distance between this and other point.
// The distance x to x of the points.
int Point::xDistanceTo(const Point &other) const
{
    return m_x < other.m_x ? other.m_x - m_x : m_x - other.m_x;
}

// Calculates the vertically distance between this and other point.
int Point::yDistanceTo(const Point &other) const
{
    return m_y < other.m_y ? other.m_y - m_y : m_y - other.m_y;
}
