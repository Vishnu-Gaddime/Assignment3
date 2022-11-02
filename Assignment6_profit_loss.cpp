#include <iostream>
#include "assert.h"

using namespace std;

int calculations(int cp, int sp)
{
    return sp - cp;
}

void result(int n)
{
    if (n < 0)
        cout << "LOSS = " << n * -1;
    else if (n > 0)
        cout << "PROFIT" << n;
    else
        cout << "NO Profit and No Loss";
}

void selfTest()
{
    assert(calculations(500, 700) == 200);
    assert(calculations(500, 450) == -50);
}

int main()
{
    selfTest();
    int cp, sp, calc = 0;
    cout << "Enter the Cost Price" << endl;
    cin >> cp;
    cout << "Enter the Selling Price" << endl;
    cin >> sp;
    result(calculations(cp, sp));
    return EXIT_SUCCESS;
}