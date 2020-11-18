//Variant 14
#include <math.h>
#include <iostream>

using namespace std;

int main() {
	double i, S0, S, f, g, step;
	cout << "Enter the calculation step :";
	cin >> step;
	S = 0;
	for (i = 0; i <= 1.05; i += step) {
		f = 1.0 / cos(i);
		g = 3 - pow(i, 2);
		S0 = (g - f) * step;
		S += S0;
	}
	cout << "S = " << S;
}

