#include <bits/stdc++.h>
using namespace std;
void showData(string s)
{
}
int main()
{
    queue<string> que;

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int m;
        cin >> m;
        if (m == 0)
        {
            string value;
            cin >> value;
            que.push(value);
        }
        else if (m == 1)
        {
            if (!que.empty())
            {
                cout << que.front() << endl;
                que.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}