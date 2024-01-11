#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Frame.h"
#include "Rectangle.h"

using namespace std;

int main() {
	Frame f1{ 5.0, 5.0, 4.5, 4.5 };

	cout << "f1 length: " << f1.getLength() << ", f1 width: " << f1.getWidth()
		<< "\nf1 inner length: " << f1.getInnerLength() << ", f1 inner width: " << f1.getInnerWidth()
		<< "\nf1 area: " << f1.area() << endl;

	f1.setInnerLength(4.9);
	f1.setInnerWidth(4.9);

	cout << "f1 length: " << f1.getLength() << ", f1 width: " << f1.getWidth()
		<< "\nf1 inner length: " << f1.getInnerLength() << ", f1 inner width: " << f1.getInnerWidth()
		<< "\nf1 area: " << f1.area() << endl;

	Rectangle* rectPtr{ &f1 };	// Frame is-a Rectangle(by inheritance)

	cout << "f1 area : " << rectPtr->area() << endl;

}