#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    while (n--)
    {
        long long int x;
        cin >> x;
        pq.push(x);
    }
    int m;
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        int v;
        cin >> v;
        if (v == 0)
        {
            long long int x;
            cin >> x;
            pq.push(x);
            cout << pq.top() << endl;
        }

        else if (v == 1)
        {
            if (!pq.empty())
            {
                cout << pq.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (v == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
                if (!pq.empty())
                {
                    cout << pq.top() << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else

            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}