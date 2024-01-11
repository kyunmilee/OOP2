#include <stdexcept>
#include "Frame.h"

using namespace std;

Frame::Frame(double w, double l, double i_w, double i_l)
    : Rectangle(w, l) {
    setInnerWidth(i_w);
    setInnerLength(i_w);
}

void Frame::setInnerWidth(double w) {
    if (w < 0 || w >= Rectangle::getWidth()) {
        throw invalid_argument("invalid width value!");
    }
    innerWidth = w;
}
void Frame::setInnerLength(double l) {
    if (l < 0 || l >= Rectangle::getLength()) {
        throw invalid_argument("invalid length value!");
    }
    innerLength = l;
}

double Frame::getInnerWidth() const {
    return innerWidth;
}
double Frame::getInnerLength() const {
    return innerLength;
}

double Frame::area() const {
    return (Rectangle::getLength() * Rectangle::getWidth()) - innerWidth * innerLength;
}