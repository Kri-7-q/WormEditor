#ifndef GAMEFIELD_H
#define GAMEFIELD_H

#include <QVariant>

class GameFieldObject
{
public:
    GameFieldObject();

    QVariant frameColor() const;
    void setFrameColor(const QVariant &frameColor);
    QVariant color() const;
    void setColor(const QVariant &color);

private:
    QVariant m_frameColor;
    QVariant m_color;
};

#endif // GAMEFIELD_H
