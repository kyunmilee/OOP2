#include <iostream>

using namespace std;

int main() {
	int number1{ 0 }, number2{ 0 };

	cout << "Enter two integers: ";
	cin >> number1 >> number2;

	if (number1 % 2 == 0) {
		cout << "The number1 " << number1 << " is an even number!" << endl;
	}
	if (number1 % 2 != 0) {
		cout << "The number1 " << number1 << " is an odd number!" << endl;
	}
	if (number2 % 2 == 0) {
		cout << "The number2 " << number2 << " is an even number!" << endl;
	}
	if (number2 % 2 != 0) {
		cout << "The number2 " << number2 << " is an odd number!" << endl;
	}

	int sum = number1 + number2;

	cout << "Sum is " << sum << endl;

	int Product = number1 * number2;
	
	cout << "Product is " << Product << endl;

	int Average = sum / 2;

	cout << "Average is " << Average << endl;

}