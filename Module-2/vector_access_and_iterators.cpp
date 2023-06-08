#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 1, 3, 5, 6};
    cout << v.back() << endl;
    cout << v[0] << endl;
    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}