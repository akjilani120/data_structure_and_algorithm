#include <bits/stdc++.h>
using namespace std;
int main()
{
    int value;

    list<int> myList;
    while (true)
    {
        cin >> value;
        if (value == -1)
        {
            break;
        }
        else
        {
            myList.push_back(value);
        }
    }
    myList.sort();
    myList.unique();
    for (int a : myList)
    {
        cout << a << " ";
    }
    return 0;
}