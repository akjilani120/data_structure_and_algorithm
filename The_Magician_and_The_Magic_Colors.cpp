#include <bits/stdc++.h>
using namespace std;
void checkColor(string s)
{
    stack<char> st;
    for (char c : s)
        if (c == 'R' || c == 'B' || c == 'G')
        {
            st.push(c);
        }
        else
        {
            if (!st.empty())
            {
                if ((st.top() == 'R' && c == 'B') || (st.top() == 'B' && c == 'R'))
                {

                    // if (st.top() == 'P')
                    // {
                    //     st.pop();
                    // }
                    // else
                    // {
                    st.push('P');
                    // }
                    st.pop();
                }
                else if ((st.top() == 'R' && c == 'G') || (st.top() == 'G' && c == 'R'))
                {

                    // if (st.top() == 'Y')
                    // {
                    //     st.pop();
                    // }
                    // else
                    // {
                    st.push('Y');
                    st.pop();
                    // }
                }
                else if ((st.top() == 'B' && c == 'G') || (st.top() == 'G' && c == 'B'))
                {

                    // if (st.top() == 'C')
                    // {
                    //     st.pop();
                    // }
                    // else
                    // {
                    st.push('C');
                    st.pop();
                    // }
                    // }else{
                    //     cout << st.top();
                    //     st.pop();
                    // }
                }
            }
        }
    while (st.empty() == false)
    {
        cout << st.top();
        st.pop();
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        int m;
        cin >> m;
        for (int i = 1; i <= m; i++)
        {
            string value;
            cin >> value;
            checkColor(value);
        }
    }

    return 0;
}