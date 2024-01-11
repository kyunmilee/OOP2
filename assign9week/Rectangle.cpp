#include <sstream>
#include "Rectangle.h"
#include <stdexcept>
using namespace std;

Rectangle::Rectangle(double wid, double len) {
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

bool Rectangle::operator==(const Rectangle& rec) const {
    if ((this->width == rec.getWidth()) && (this->length == rec.getLength())) {
        return true;
    }
    else {
        return false;
    }
}

bool Rectangle::operator>(const Rectangle& rec) const {
    if (this->area() > rec.area()) {
        return true;
    }
    else {
        return false;
    }
}

Rectangle Rectangle::operator-(const Rectangle& rec) const {
    Rectangle temp;
    temp.setLength(this->length - rec.getLength());
    temp.setWidth(this->width - rec.getWidth());
    return temp;
}

void Rectangle::operator-=(const Rectangle& rec) {
    this->setLength(this->length - rec.getLength());
    this->setWidth(this->width - rec.getWidth());
}

bool Rectangle::operator!=(const Rectangle& rec) const {
    if ((this->width != rec.getWidth()) && (this->length != rec.getLength())) {
        return true;
    }
    else {
        return false;
    }
}

bool Rectangle::operator<(const Rectangle& rec) const {
    if (this->area() < rec.area()) {
        return true;
    }
    else {
        return false;
    }
}

Rectangle Rectangle::operator+(const Rectangle& rec) const {
    Rectangle temp;
    temp.setLength(this->length + rec.getLength());
    temp.setWidth(this->width + rec.getWidth());
    return temp;
}

void Rectangle::operator+=(const Rectangle& rec) {
    this->setLength(this->length + rec.getLength());
    this->setWidth(this->width + rec.getWidth());
}

ostream& operator<<(ostream& output, const Rectangle& rec) {
    output << "Length: " << rec.getLength() << " ,Width: " << rec.getWidth() << "\n";
    return output;
}