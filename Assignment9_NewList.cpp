#include <iostream>
#include <list>
#include <iterator>
#include "assert.h"

using namespace std;

list<int> getNewList(list<int> l, int m)
{
    list<int> l1;
    for (auto it = l.begin(); it != l.end(); it++)
    {
        l1.emplace_back(*it * m);
    }
    return l1;
}

void printData(list<int> l)
{
    cout << "(";
    for (auto it = l.begin(); it != l.end(); it++)
    {
        if (*it == l.back())
            cout << *it;
        else
            cout << *it << ",";
    }
    cout << ")";
}

int main()
{
    int n,m;
    list <int> list1;
    list <int> list2;
    cout << "Enter the size of list" << endl;
    cin >> n;
    cout << "Enter the elements of list" << endl;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        list1.emplace_back(m);
    }
    cout << "Enter the number M" << endl;
    cin >> m;
    list2 = getNewList(list1, m);
    cout << "L1 = ";
    printData(list1);
    cout << " " << "L2 = ";
    printData(list2);
    return EXIT_SUCCESS;
}