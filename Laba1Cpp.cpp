#define M_PI 3.14159265358979323846
#define full_angle 180
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x1, y1, x2, y2, x3, y3;       //  Координати вершин трикутника //
	double a, b, c;                      // Довжини сторін трикутника  //
	double angle_A, angle_B, angle_C;    //  Величини кутів трикутника //
	cout << "Enter the coordinates of the vertex A of the triangle:" << endl;
	cout << "x1 = "; cin >> x1;
	cout << "y1 = "; cin >> y1;
	cout << "Enter the coordinates of the vertex B of the triangle:" << endl;
	cout << "x2 = "; cin >> x2;
	cout << "y2 = "; cin >> y2;
	cout << "Enter the coordinates of the vertex C of the triangle:" << endl;
	cout << "x3 = "; cin >> x3;
	cout << "y3 = "; cin >> y3;
	a = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	b = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
	c = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	if ((a + b) > c && (a + c) > b && (b + c) > a) {
		angle_A = (full_angle * acos((b * b + c * c - a * a) / (2 * b * c))) / M_PI;
		angle_B = (full_angle * acos((a * a + c * c - b * b) / (2 * a * c))) / M_PI;
		angle_C = (full_angle * acos((a * a + b * b - c * c) / (2 * a * b))) / M_PI;
		printf("\na = %.2f", a);
		printf("\nb = %.2f", b);
		printf("\nc = %.2f", c);
		printf("\nangle_A = %.4f", angle_A);
		printf("\nangle_B = %.4f", angle_B);
		printf("\nangle_C = %.4f\n", angle_C);
	}
	else cout << "\nThe triangle does not exist!\n";
	system("pause");
}
