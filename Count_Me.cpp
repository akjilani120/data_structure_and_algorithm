#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i <= t; i++)
    {
        map<string, int> mp;
        string sentence;
        getline(cin, sentence);
        string word;
        stringstream ss(sentence);
        string maxValue;
        int maxCount = 0;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > maxCount)
            {
                maxCount = mp[word];
                maxValue = word;
            }
        }
        if (maxCount != 0)
        {
            cout << maxValue << " " << maxCount << endl;
        }
    }
    return 0;
}