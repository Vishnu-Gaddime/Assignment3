#include <iostream>
#include <list>
#include <iterator>
#include "assert.h"

using namespace std;

int getNumber(list<int> l, int k)
{
    l.sort();
    list<int>::iterator it = l.begin();
    advance(it, k-1);
    return *it;
}

int position(list<int> l, int n)
{
    int index = distance(l.begin(), find(l.begin(), l.end(), n));
    return index + 1;
}

void selfTest()
{
    assert(getNumber({ 82,11,55,20,10 }, 3) == 20);
    assert(position({ 82,11,55,20,10 }, 20) == 4);
}

int main()
{
    selfTest();
    int n,k;
    list <int> list;
    cout << "Enter the size of list" << endl;
    cin >> n;
    cout << "Enter the elements of list" << endl;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        list.emplace_back(m);
    }
    cout << "Enter the Position K" << endl;
    cin >> k;
    int element = getNumber(list, k);
    cout << "Kth smallest integer = " << element << " Position of Kth smallest integer = " << position(list, element) << endl;
    return EXIT_SUCCESS;
}