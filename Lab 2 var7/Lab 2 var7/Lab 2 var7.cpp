#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main()
{
	const float PI = 3.14;

	double x;
	cout << "Enter coordinate for x \n";
	cin >> x;

	double y;
	cout << "Enter coordinate for y \n";
	cin >> y;

	double r;
	r = sqrt(pow(x, 2) + pow(y, 2));

	double a;
	a = 0;


	if (r <= 1) {
		double a = atan(y / x);
	}
	else {
		cout << "Coordinate is not included \n";
		return 0;
	}

	if (a <= 1 / 4 * PI && a <= 1 / 2 * PI || 3 / 4 * PI < a && a < PI || 5 / 4 * PI < a && a < 3 / 2 * PI || 7 / 4 * PI <= a && a <= 2 * PI) {
		cout << "Coordinate is included \n";

	}
	else {
		cout << "Coordinate is not included \n";
	}
}