#include <bits/stdc++.h>
using namespace std;
void fun()
{
    int n;
    cin >> n;
    vector<int> A(n);
    vector<int> B(n);
    vector<int> C(n * 2);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
    }
    for (int i = 0; i < n; i++)
    {
        C[i] = B[i];
        C[n + i] = A[i];
    }

    for (int i = 0; i < n * 2; i++)
    {
        cout << C[i] << " ";
    }
}
int main()
{
    fun();
    return 0;
}