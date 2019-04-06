#include "gamefield.h"

GameFieldObject::GameFieldObject()
    : m_frameColor("lightgrey")
    , m_color("transparent")
{

}

QVariant GameFieldObject::frameColor() const
{
    return m_frameColor;
}

void GameFieldObject::setFrameColor(const QVariant &frameColor)
{
    m_frameColor = frameColor;
}

QVariant GameFieldObject::color() const
{
    return m_color;
}

void GameFieldObject::setColor(const QVariant &color)
{
    m_color = color;
}
