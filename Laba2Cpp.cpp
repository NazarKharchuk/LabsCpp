#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	double a, b, c,            //Bricks ribs a, b and c//
		x, y;					//Hole size x and y //
	cout << "Add more ribs a, b and c brick \n";
	cin >> a >> b >> c;
	if (a > 0 && b > 0 && c > 0) {
		cout << " Enter size x and y hole \n";
		cin >> x >> y;
		if (x > 0 && y > 0) {
			if (x >= a && y >= b || x >= b && y >= a) {
				cout << "Will fit\n";
			}
			else {
				if (x >= c && y >= a || x >= a && y >= c) {
					cout << "Will fit\n";
				}
				else {
					if (x >= c && y >= b || x >= b && y >= c) {
						cout << "Will fit\n";
					}
					else {
						cout << "Not will fit\n";
					}
				}
			}
		}
		else cout << "Invalid values entered\n";
	}
	else cout << "Invalid values entered\n";
}
