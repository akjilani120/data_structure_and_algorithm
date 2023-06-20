#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist = {10, 50, 30, 710, 500};

    // mylist.remove(10);
    // mylist.sort();
    // mylist.sort(greater<int>());
    // mylist.unique();
    mylist.reverse();
    for (int val : mylist)
    {
        cout << val << " ";
    }
    return 0;
}