#include <iostream>
using namespace std;
void solve(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i <= (n + 1) / 2)
        {
            for (int j = 1; j <= i - 1; j++)
            {
                cout << " ";
            }
            cout << "X  ";
            if (i != n)
            {
                for (int j = 1; j <= (n + 1) / 2 - i - 1; j++)
                {
                    cout << "  ";
                }
                cout << "/ ";
            }
        }
        else
        {
            for (int j = 1; j <= (2 * n) - i - 1; j++)
            {
                cout << "  ";
            }
            cout << "*  ";
            for (int j = 1; j <= 2 * (i - n) - 1; j++)
            {
                cout << "  ";
            }
            cout << "*  ";
        }
        cout << "\n";
    }
}
int main()
{
    int n = 8;
    cout << "X Star Pattern for " << n << " lines." << endl;
    solve(n);
}