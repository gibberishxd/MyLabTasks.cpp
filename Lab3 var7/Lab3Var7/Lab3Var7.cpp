#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double x;
	cout << "Enter x \n";
	cin >> x;
	
	int k = 1;
	double a = double(x) / (sqrt(k) * (k + 2));
	double sum = a;
	

	while (!(k > 10 && abs(a) < 0.001))
	{
		k = k + 1;
		a = double(x) / (sqrt(k) * (k + 2));
		sum = double(sum) + double(a);
	}

	cout << (double(sum));

}