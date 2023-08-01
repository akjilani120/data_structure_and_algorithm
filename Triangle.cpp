#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, o;
    cin >> n >> m >> o;

    if (n == m && m == o && o == n && n > 0 && m > 0 && o > 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}