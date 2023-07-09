#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    queue<int> que;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    for (int i = 1; i <= m; i++)
    {
        int x;
        cin >> x;
        que.push(x);
    }
    int flag = 0;
    if (que.size() != st.size())
    {
        flag = 1;
    }
    else
    {
        while (st.empty() == false && que.empty() == false)
        {
            if (st.top() != que.front())
            {
                flag = 1;
            }
            st.pop();

            que.pop();
        }
    }

    if (flag == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}