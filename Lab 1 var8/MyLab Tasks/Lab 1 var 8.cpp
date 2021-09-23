#include <iostream>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159
using namespace std;

int main()
{


	float h;
	cout << "\n Enter Height: \n";
	cin >> h;

	float r;
	cout << "\n Enter Radius: \n";
	cin >> r;

	float S = PI * pow(r, 2) * h;
	float V = S / 3;

	cout << "Volume of Cylinder " << S << endl;
	cout << "Volume of Cone " << V << endl;


}