#include <iostream>
#include "assert.h"

using namespace std;

int sumOfDigits(int n)
{
    int sum = 0;
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    if (sum < 0)
        return sum * -1;
    else
        return sum;
}

void selfTest()
{
    assert(sumOfDigits(123) == 6);
    assert(sumOfDigits(10123) == 7);
    assert(sumOfDigits(0) == 0);
    assert(sumOfDigits(-10123) == 7);
}

int main()
{
    selfTest();
    int n;
    cout << "Enter the number N " << endl;
    cin >> n;
    if (n < -99999 || n > 99999)
        cout << "Exceeds the Limits" << endl;
    else
        cout << "Sum of digits = " << sumOfDigits(n);
    return EXIT_SUCCESS;
}