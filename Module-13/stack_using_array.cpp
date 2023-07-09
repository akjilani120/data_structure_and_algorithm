#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    // int sizeV()
    // {
    //     return v.size()
    // }
    bool emptyV()
    {
        if (v.size() == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    myStack stc;
    stc.push(10);
    stc.push(20);
    stc.pop();
    stc.pop();
    // if (stc.emptyV() == false)
    // {
    //     cout << stc.top() << endl;
    // }
    int n;
    for (int i = 1; i <= n; i++)
    {
        int value;
        cin >> value;
        stc.push(value);
    }
    while (stc.emptyV() == false)
    {
        stc.pop();
        cout << stc.top() << endl;
    }

    return 0;
}