#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    getline(cin, a);
    getline(cin, b);
    a.erase(remove(a.begin(), a.end(), ' '), a.end());
    b.erase(remove(b.begin(), b.end(), ' '), b.end());
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

        cout << a << endl;
    cout << b << endl;

    return 0;
}