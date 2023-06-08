#include <bits/stdc++.h>
using namespace std;
int main()
{
    // replace function
    // vector<int> v = {
    //     1,
    //     2,
    //     3,
    //     4,
    //     2,
    //     6,
    //     2,
    //     8,
    //     9,
    //     10,
    //     2,
    //     2,
    //     3,
    // };
    // replace(v.begin(), v.end(), 2, 100);
    // for (int a : v)
    // {
    //     cout << a << " ";
    // }
    // find function
    vector<int> v = {1, 2, 5, 3, 4, 3, 5, 8, 10};
    auto it = find(v.begin(), v.end(), 100);
    cout << *it;
    return 0;
}