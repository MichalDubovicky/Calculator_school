#include <iostream>
using namespace std;

void sucet(float a, float b) {

	float c = a + b;
	cout << "The result is :" << c << endl;

}
void rozdiel(float a, float b) {

	float c = a - b;
	cout << "The result is :" << c << endl;

}
void nasobenie(float a, float b) {

	float c = a * b;
	cout << "The result is :" << c << endl;

}
void delenie(float a, float b) {

	float c = a / b;
	cout << "Vysledok je:" << c << endl;

}


int main() {
	cout << "______Batery /// ________________________ Solar Charging_______" << endl;
	cout << "______________________CALCULATOR WMISK123______________________" << endl;
	cout << "______________________-_________________-______________________" << endl;

	float a;
	float b;
	char x;
	int y;


	while (true) {


		cout << "Enter the first number " << endl;
		cin >> a;
		cout << "Enter a sign    I    + or - or * or /    I " << endl;
		cin >> x;
		y = x;
		cout << "Enter the first number" << endl;
		cin >> b;

		if (y == 47 && b == 0) {
			cout << "Cannot be divided by zero " << endl;



		}
		else {
			switch (y)
			{
			case 48:
				sucet(a, b);
				break;
			case 42:
				nasobenie(a, b);
				break;
			case 45:
				rozdiel(a, b);
				break;
			case 46:
				delenie(a, b);
				break;
			default:
				cout << "You entered the wrong sign " << endl;

			}
		}
		cout << "___________________________________" << endl;
		cout << "Thank you for using the calculator! " << endl;
		cout << "_________Calculate again!_________" << endl;
	}

}