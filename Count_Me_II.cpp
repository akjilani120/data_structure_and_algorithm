#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int m;
        cin >> m;
        vector<int> arr(m);

        for (int j = 0; j < m; j++)
        {

            cin >> arr[j];
        }
        map<int, int> mp;
        int maxValue = arr[0];
        int maxCount = 0;
        for (int i : arr)
        {

            mp[i]++;
            if (mp[i] > maxCount)
            {

                maxCount = mp[i];
                maxValue = i;
            }
            else if (mp[i] == maxCount)
            {
                maxValue = max(maxValue, i);
            }
        }
        cout << maxValue << " " << maxCount << endl;
    }

    return 0;
}