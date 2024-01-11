#ifndef FRAME_H
#define FRAME_H

#include "Rectangle.h"

class Frame : public Rectangle {
public:
    explicit Frame(double = 1.0, double = 1.0, double = 0.9, double = 0.9);
    void setInnerWidth(double w);
    void setInnerLength(double l);
    double getInnerWidth() const;
    double getInnerLength() const;

    double area() const;

private:
    double innerWidth;
    double innerLength;
};

#endif