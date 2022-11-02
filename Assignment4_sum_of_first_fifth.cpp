#include <iostream>
#include <string>
#include "assert.h"

using namespace std;

int sumOfDigits(int n)
{
    int num1 = n % 10;
    int num2 = n;
    while (num2 >= 10)
        num2 /= 10;
    return num1 + num2;
}

void selfTest()
{
    assert(sumOfDigits(12345) == 6);
    assert(sumOfDigits(91912) == 11);
}

int main()
{
    selfTest();
    int n;
    cout << "Enter the number N " << endl;
    cin >> n;
    if (n > 99999 || n < 9999)
        cout << "Invalid input" << endl;
    else
        cout << "sum of first and fifth digit = "  << sumOfDigits(n) << endl;
    return EXIT_SUCCESS;
}