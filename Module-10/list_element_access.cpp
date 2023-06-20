#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist = {10, 50, 30, 710, 500};
    cout << mylist.back();
    cout << endl;
    cout << mylist.front();
    cout << *next(mylist.begin(), 2);
    return 0;
}