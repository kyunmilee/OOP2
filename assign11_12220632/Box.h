#ifndef BOX_H
#define BOX_H

#include "Rectangle.h"

class Box : public Rectangle {
public:
    explicit Box(double = 1.0, double = 1.0, double = 1.0);
    void setHeight(double w);
    double getHeight() const;

    double perimeter() const;
    double area() const;
    double volume() const;

private:
    double height;
};

#endif