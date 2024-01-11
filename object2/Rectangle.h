#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle{
public:
    Rectangle(double len = 1.0, double wid = 1.0);
    double getLength() const;
    void setLength(double len);
    double getWidth() const;
    void setWidth(double wid);
    double perimeter() const;
    double area() const;
    
private:
    double length;
    double width;
};

#endif