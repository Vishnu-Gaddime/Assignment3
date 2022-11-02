#include <iostream>
#include "assert.h"

using namespace std;

int addOne(int n)
{
    int rem, ans = 0, p = 1;
    while (n > 0)
    {
        rem = n % 10;
        if (rem == 9)
            rem = 0;
        else
            rem += 1;
        ans += p * rem;
        p *= 10; n /= 10;
    }
    return ans;
}

void selfTest()
{
    assert(addOne(11234) == 22345);
    assert(addOne(56789) == 67890);
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
        cout << "M = " << addOne(n) << endl;
    return EXIT_SUCCESS;
}