#include "line.h"

// Constructs a line from Point(0,0) to Point(0,0).
Line::Line()
{

}

// Construce a line from point 1 to point 2.
Line::Line(const int x1, const int y1, const int x2, const int y2)
    : m_lineStart(x1, y1)
    , m_lineEnd(x2, y2)
{

}

// Constructs a line from start to end.
Line::Line(const Point &start, const Point &end)
    : m_lineStart(start)
    , m_lineEnd(end)
{

}

// The horizontally distance between lines start and end point.
int Line::dx() const
{
    return m_lineStart.xDistanceTo(m_lineEnd);
}

// The vertically distance between lines start and end point.
int Line::dy() const
{
    return m_lineStart.yDistanceTo(m_lineEnd);
}

// The mathmaticla function f(x) to get the y value from x.
//          (y2 - y1)
// f(x) =  ----------- * (x - x1) + y1
//          (x2 - x1)
int Line::f(const int x) const
{
    return (m_lineEnd.y() - m_lineStart.y()) / (m_lineEnd.x() - m_lineStart.x()) * (x - m_lineStart.x()) + m_lineStart.y();
}
