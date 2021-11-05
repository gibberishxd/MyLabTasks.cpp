#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, i;
    cout << "Enter n (natural number) \n";
    cin >> n;

    double x1, x2, x3;
    x1 = 1;
    x2 = 0.3;
    x3 = 0;

    cout << x1 << " = x1 \n";
    cout << x2 << " = x2 \n";

    for (int i = 3; i <= n; i++ ) {
        x3 = (i + 1) * x1;
        x1 = x2;
        x2 = x3;
   }
    cout << x3;
    
    return 0;
}