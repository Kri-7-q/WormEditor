#ifndef LINE_H
#define LINE_H

#include "point.h"

class Line
{
public:
    Line();
    Line(const int x1, const int y1, const int x2, const int y2);
    Line(const Point &start, const Point &end);

    Point start() const                 { return m_lineStart; }
    void setStart(const Point &start)   { m_lineStart = start; }
    Point end() const                   { return m_lineEnd; }
    void setEnd(const Point &end)       { m_lineEnd = end; }

    int dx() const;
    int dy() const;

    int f(const int x) const;

private:
    Point m_lineStart;
    Point m_lineEnd;
};

#endif // LINE_H
