#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] < v[i + 1] == 1)
        {
            c++;
        }
        else if (v[i] == v[i + 1])
        {
            c++;
        }
    }
    cout << c << endl;

    return 0;
}