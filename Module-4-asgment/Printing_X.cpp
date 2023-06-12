#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int mid = n / 2;
  for (int i = 0; i < n; i++)
  {
    if (i == mid)
    {
      for (int k = 0; k < n; k++)
      {
        if (k == mid)
        {
          cout << "X";
        }
        else
        {
          cout << " ";
        }
      }
    }
    else
    {
      for (int k = 0; k < n; k++)
      {
        if (i == k)
        {
          cout << "\\";
        }
        else if (i + k == n - 1)
        {
          cout << "/";
        }

        else
        {
          cout << " ";
        }
      }
    }
    cout << endl;
  }

  return 0;
}