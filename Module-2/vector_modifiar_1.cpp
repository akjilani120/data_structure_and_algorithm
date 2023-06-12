#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> x = {10, 20, 30, 40, 50};
    vector<int> v = {1, 2, 3, 4, 5, 6};
    // v = x;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // sortcut system

    x.insert(x.begin() + 2, v.begin(), v.end()); // insert multiple data in x
    for (int a : x)
    {
        cout << a << " ";
    }
    // v.erase(v.begin() + 2);// single delete value
    // v.erase(v.begin() + 2, v.begin() + 4); // Multi delete value
    // for (int a : v)
    // {
    //     cout << a << " ";
    // }
    return 0;
}