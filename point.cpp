#include "point.h"

Point::Point(int x, int y)
{
    this->x = x;
    this->y = y;
}

int Point::getX()
{
    return x;
}

void Point::setX(int newX)
{
    x = newX;
}

int Point::getY()
{
    return y;
}

void Point::setY(int newY)
{
    y = newY;
}
