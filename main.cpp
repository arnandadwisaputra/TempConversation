#include <iostream>
using namespace std;

int main() {
	cout << "Konversi Suhu\n\n" << endl;

	cout << "input celcius:";
	double c;
	cin >> c;

	double r = (c * 4 / 5);
	double f = (c * 9 / 5)  + 32;

	cout << "\nKonversi:" << endl;
	cout << " " << r << char(248) << "R" << endl;
	cout << " " << f << char(248) << "F" << endl;

}