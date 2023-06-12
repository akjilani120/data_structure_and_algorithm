#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        int a[m];
        int flag = 1;
        for (int j = 0; j < m; j++)
        {
            cin >> a[j];
        }
        for (int j = 0; j < m - 1; j++)
        {

            if (a[j] > a[j + 1])
            {

                flag = 0;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}