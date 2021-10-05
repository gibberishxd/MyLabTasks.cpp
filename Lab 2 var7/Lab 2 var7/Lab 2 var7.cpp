#include <iostream>
#include <cmath>
#include <numbers>
using namespace std;

int main()p
{

	float x;
	cout << "Enter coordinate for x \n";
	cin >> x;

	float y;
	cout << "Enter coordinate for y \n";
	cin >> y;

	float r;
	r = sqrt(pow(x, 2) + pow(y, 2));

	float a;

	if (r <= 1) {
		a = atan(y / x);
	}

	

}