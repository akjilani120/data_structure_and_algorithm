#include <bits/stdc++.h>
using namespace std;
void isValid(string s)
{
    stack<char> st;
    int countA = 0;
    int countB = 0;
    for (char c : s)
    {
        if (c == 'A' || c == 'B')
        {
            st.push(c);
        }
        if (!st.empty())
        {
            if (c == 'A' && st.top() == 'A')
            {
                countA++;
                st.pop();
            }
            else if (c == 'B' && st.top() == 'B')
            {
                countB++;
                st.pop();
            }
        }
    }
    if (countA == countB)
        cout << "YES" << endl;
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        string s;
        cin >> s;
        isValid(s);
    }

    return 0;
}