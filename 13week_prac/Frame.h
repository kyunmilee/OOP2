#ifndef FRAME_H
#define FRAME_H

#include "Rectangle.h"

class Frame : public Rectangle {
public:
	explicit Frame(double = 1.0, double = 1.0, double = 0.9, double = 0.9);
	void setInnerWidth(double w); // set width
	void setInnerLength(double l); // set length
	double getInnerWidth() const; // get width
	double getInnerLength() const; // get length  

	virtual double area() const override; // area

private:
	double innerWidth;
	double innerLength;
};

#endif