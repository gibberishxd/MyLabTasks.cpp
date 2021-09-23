#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main()
{

	float x;
	cout << "Enter coordinate for x";
	cin >> x;

	float y;
	cout << "Enter coordinate for y";
	cin >> y;

	float r;
	r = sqrt(pow(x, 2) + pow(y, 2));

	if (r <= 1) {
		float a = atan(y / x);
	}
}