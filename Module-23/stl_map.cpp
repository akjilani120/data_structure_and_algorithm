#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    // mp.insert({"sakib al hasan", 75});
    // mp.insert({"tamim iqbal", 15});
    // // mp.insert({"jilani", 35});
    // mp.insert({"Musfiqur", 25});

    mp["sakib"] = 70;
    mp["dhaka"] = 75;
    mp["jilani"] = 80;

    if (mp.count("jilani"))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    // cout << mp["Musfiqur"];

    // for (auto it = mp.begin(); it != mp.end(); it++)
    // {
    //     cout << it->first << endl;
    // }

    return 0;
}