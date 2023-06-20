#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30, 30, 50, 60, 70};
    // myList.push_back(100);
    list<int> newList = {100, 200, 300};
    // this is sortcurt way
    // newList = myList;
    // newList.assign(myList.begin(), myList.end());
    // myList.insert(next(myList.begin(), 2), newList.begin(), newList.end());
    // myList.erase(next(myList.begin(), 2), next(myList.begin(), 5));
    // replace(myList.begin(), myList.end(), 30, 100);
    // for (int value : myList)
    // {
    //     cout << value << " ";
    // }
    auto it = find(myList.begin(), myList.end(), 70);
    if (it == myList.end())
    {
        cout << "Not fould" << endl;
    }
    else
    {
        cout << "Found";
    }

    return 0;
}