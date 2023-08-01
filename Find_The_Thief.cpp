#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int m;
        cin >> m;
        int arr[m];
        map<int, int> mp;
        for (int i = 0; i < m; i++)
        {
            cin >> arr[i];
        }
        for (int i : arr)
        {
            mp[i]++;
        }
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if (it->second % 2 != 0)
            {
                cout << it->first << " ";
            }
        }
        cout << endl;
    }

    return 0;
}