#include <sstream>
#include "Rectangle.h"
#include <stdexcept>
using namespace std;

Rectangle::Rectangle(double wid, double len){
    if ((len < 0 || len > 20) && (wid < 0 || wid > 20)) {
        throw invalid_argument("width and length must be > 0 and < 20.0");
    }
    else if (len < 0 || len > 20) {
        throw invalid_argument("length must be > 0 and < 20.0");
    }
    else if (wid < 0 || wid > 20) {
        throw invalid_argument("width must be > 0 and < 20.0");
    }
    else {
        length = len;
        width = wid;
    }
}

double Rectangle::getLength() const {
    return length;
}
void Rectangle::setLength(double len) {
    if (len < 0 || len > 20) {
        throw invalid_argument("length must be > 0 and < 20.0");
    }
    else {
        length = len;
    }
}

double Rectangle::getWidth() const {
    return width;
}
void Rectangle::setWidth(double wid) {
    if (wid < 0 || wid > 20) {
        throw invalid_argument("width must be > 0 and < 20.0");
    }
    else {
        width = wid;
    }
}

double Rectangle::perimeter() const {
    return (length + width) * 2;
}

double Rectangle::area() const {
    return length * width;
}
 