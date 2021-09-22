// lab3.4.cpp
// Верхутін Даніїл
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою
// Варіант 3

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double x, y, R;

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	if (((x >= -R && x <= 0) && (y >= -R && y <= 0)) ||
		(x >= 0 && x <= R) && (y >= 0 && y <= R) ||
		(((x >= -R && x <= 0)) && (y <= R - sqrt(R * R - pow((x + R), 2)))) ||
		((x >= 0 && x <= R) && (y >= -R + sqrt(R * R - pow((x - R), 2)))))
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	cin.get();
	return 0;
}