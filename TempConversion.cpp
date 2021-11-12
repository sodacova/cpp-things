#include <iostream>
#include <string>
using namespace std;

float f_to_c(float f) {
	float c = (f - 32) * 5 / 9;
	return c;
}

float c_to_f(float c) {
	float f = (c * 9 / 5) + 32;
	return f;
}

int main() {
	float c, f;

	string unit;

	cout << "Please enter the unit you want to convert to (C or F): ";
	cin >> unit;

	if (unit == "F") {
		cout << "Please enter a temperature (in Celcius): ";
		cin >> c;

		float temp = c_to_f(c);
		cout << temp << "F" << endl;
	}

	else if (unit == "C") {
		cout << "Please enter a temperature (in Fahrenheit): ";
		cin >> f;

		float temp = f_to_c(f);
		cout << temp << "C" << endl;
	}

	else cout << "Invalid unit!" << endl;
}
