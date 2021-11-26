#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int limit = 1000;

    for (int i = 1; i <= limit; i++) {

        int curNum = i;

        int reNum = 0;

        int quantity = 0;

        while (curNum != 0) {
            quantity++;
            curNum = curNum / 10;
        }

        curNum = i;

        for (int j = quantity - 1; j >= 0; j--) {
            reNum = reNum + ((curNum % 10) * pow(10, j));
            curNum = curNum / 10;
        }

        if (i == reNum) {
            cout << i << endl;
        }
    }
    return 0;
}