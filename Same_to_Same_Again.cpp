#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        if (l.size() == 0)
            return true;
        else
            return false;
    }
};
class myQueue
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_front();
    }
    int top()
    {
        return l.front();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        if (l.size() == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    myStack st;
    myQueue que;
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
            if (st.top() != que.top())
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