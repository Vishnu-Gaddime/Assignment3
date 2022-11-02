#include <iostream>
#include <list>
#include <iterator>
#include "assert.h"

using namespace std;

int findLargest(list<int> l)
{
    int largest = l.front();
    for (auto it = l.begin(); it != l.end(); it++)
    {
        if (largest < *it)
            largest = *it;
    }
    return largest;
}

int findSmallest(list<int> l)
{
    int smallest = l.front();
    for (auto it = l.begin(); it != l.end(); it++)
    {
        if (smallest > *it)
            smallest = *it;
    }
    return smallest;
}

int position(list<int> l, int n)
{
    int index = distance(l.begin(), find(l.begin(), l.end(), n));
    return index + 1;
}

void selfTest()
{
    assert(findLargest({ 55,3,23,452,82,34 }) == 452);
    assert(findSmallest({ 55,3,23,452,82,34 }) == 3);
    assert(position({ 55,3,23,452,82,34 }, 452) == 4);
    assert(position({ 55,3,23,452,82,34 },3) == 2);
}

int main()
{
    selfTest();
    int n;
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
    int element = findLargest(list);
    cout << "Largest integer = " << element << " Position of Largest integer = " << position(list, element) << endl;
    element = findSmallest(list);
    cout << " Smallest integer = " << element << " Position of Smallest integer = " << position(list, element) << endl;
    return EXIT_SUCCESS;
}