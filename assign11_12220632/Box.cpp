#include <stdexcept>
#include "Box.h"

using namespace std;

Box::Box(double w, double l, double h)
    : Rectangle(w, l) {
    setHeight(h);
}

void Box::setHeight(double h) {
    if (h < 0 || h >= 20) {
        throw invalid_argument("height must be > 0 and < 20.0");
    }
    height = h;
}


double Box::getHeight() const {
    return height;
}

double Box::perimeter() const {
    return Rectangle::getLength() * 4 + Rectangle::getWidth() * 4 + height * 4;
}

double Box::area() const {
    return (Rectangle::getLength() * Rectangle::getWidth()) * 2 + (Rectangle::getLength() * height) * 2 + (Rectangle::getWidth() * height) * 2;
}

double Box::volume() const {
    return Rectangle::getLength() * Rectangle::getWidth() * height;
}
