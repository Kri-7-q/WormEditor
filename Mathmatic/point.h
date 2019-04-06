#ifndef POINT_H
#define POINT_H


class Point
{
public:
    Point();
    Point(const int x, const int y);
    Point(const Point &pt);

    int x() const       { return m_x; }
    void setX(int x)    { m_x = x; }
    int y() const       { return m_y; }
    void setY(int y)    { m_y = y; }

    int xDistanceTo(const Point &other) const;
    int yDistanceTo(const Point &other) const;

private:
    int m_x = 0;
    int m_y = 0;
};

#endif // POINT_H
