#include <bits/stdc++.h>
using namespace std;
void insert_value(vector<int> &v, int x)
{
    v.push_back(x);
    int cur_index = v.size() - 1;
    while (cur_index != 0)
    {
        int parent_idx = (cur_index - 1) / 2;
        if (v[parent_idx] > v[cur_index])
        {
            swap(v[parent_idx], v[cur_index]);
        }
        else
        {
            break;
        }
        cur_index = parent_idx;
    }
}
void delet_he
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;

        cin >> x;
        insert_value(v, x)
    }

    return 0;
}