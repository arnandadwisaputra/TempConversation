#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	cout << "Hitung Sisi Miring Segitiga Siku-Siku\n\n";

	cout << 
			"   |" << setw(3) << "\\ \n" <<
			"   |" << setw(4) << "\\ \n" <<
			"   |" << setw(5) << "\\ \n" <<
			" a |" << setw(6) << "\\  c \n" <<
			"   |" << setw(7) << "\\ \n" <<
			"   |" << setw(8) << "\\ \n" <<
			"   |" << setw(9) << "\\ \n" << 
		    "   ---------" <<
		endl;

	cout << "masukkan sisi a:";
	double a;
	cin >> a;
	cout << "masukkan sisi b:";
	double b;
	cin >> b;

	double c = sqrt(pow(a, 2) + pow(b, 2));
	cout << "sisi miring c:" << c << endl;
}
