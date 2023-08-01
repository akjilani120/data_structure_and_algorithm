#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set<int> s;
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        int m;
        cin >> m;
        for (int i = 1; i <= m; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }

        for (auto it = s.begin(); it != s.end(); it++)
        {
            v.push_back(*it);
        }
        s.clear();
        reverse(v.begin(), v.end());
        for (auto it = v.begin(); it != v.end(); it++)
        {
            cout << *it << " ";
        }
        v.clear();
        cout << endl;
    }

    return 0;
}