#include <bits/stdc++.h>
using namespace std;
int main()
{
    // This below will give max value;
    // priority_queue<int> pq;
    // This below will give min value;
    priority_queue<int, vector<int>, greater<int>> pq;
    while (true)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            int x;
            cin >> x;
            pq.push(x);
        }
        else if (n == 1)
        {
            pq.pop();
        }
        else if (n == 2)
        {
            cout << pq.top() << " ";
        }

        else
        {
            break;
        }
    }

    return 0;
}