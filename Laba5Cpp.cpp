//Variant 2

#include <iostream>

using namespace std;

int main() {
	unsigned int first_number = 22200, number1, number2;
	for (int i = 0; i < 10; i++) {
		number1 = first_number + (i * 10);
		for (int j = 0; j < 10; j++) {
			number2 = number1 + j;
			if (number2 % 15 == 0) {
				cout << number2 << endl;
			}
		}
	}

}

