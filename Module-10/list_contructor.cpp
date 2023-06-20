#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> mylist2 = {1, 2, 3, 4};
    // int ar[5] = {10, 20, 30, 40, 50};
    vector<int> v = {100, 200, 300, 400};
    // list<int> myList(ar, ar + 5);
    list<int> myList(v.begin(), v.end());
    // for (auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout << *it << endl;
    // }
    // sortcurt furmula
    for (int val : myList)
    {
        cout << val << " ";
    }
    return 0;
}