#include <iostream>
#include "assert.h"

using namespace std;

int reverseNumber(int n)
{
    int m = 0;
    while (n > 0) {
        m = m * 10 + n % 10;
        n = n / 10;
    }
    return m;
}

void selfTest()
{
    assert(reverseNumber(123) == 321);
    assert(reverseNumber(10345) == 54301);
    assert(reverseNumber(0) == 0);
    assert(reverseNumber(100) == 1);
}

int main()
{
    selfTest();
    int n;
    cout << "Enter the number N" << endl;
    cin >> n;
    if (n > 99999)
        cout << "Exceeds the Limits" << endl;
    else
        cout << "M =  " << reverseNumber(n) << ", " ;
        if ( n < reverseNumber(n))
            cout << "M is Greater than N" << endl;
        else if ( n > reverseNumber(n))
            cout << "N is Greater than M" << endl;
        else   
            cout << "N and M are equal" << endl;
    return EXIT_SUCCESS;
}