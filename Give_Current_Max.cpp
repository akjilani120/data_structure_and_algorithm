#include <bits/stdc++.h>
using namespace std;
class Studend
{
public:
    string name;
    int roll;
    int marks;
    Studend(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};
class cmp
{
public:
    bool operator()(Studend a, Studend b)
    {
        if (a.marks < b.marks)
            return true;
        else if (a.marks > b.marks)
            return false;
        else
        {
            if (a.roll > b.roll)
                return true;
            else
                return false;
        }
    }
};
int main()
{
    int n;
    cin >> n;
    priority_queue<Studend, vector<Studend>, cmp> pq;
    for (int i = 1; i <= n; i++)
    {
        string name;
        cin >> name;
        int roll, marks;
        cin >> roll >> marks;
        Studend obj(name, roll, marks);
        pq.push(obj);
    }
    int m;
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        int v;
        cin >> v;
        if (v == 0)
        {
            string name;
            cin >> name;
            int roll, marks;
            cin >> roll >> marks;
            Studend obj(name, roll, marks);
            pq.push(obj);
            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }

        else if (v == 1)
        {
            if (!pq.empty())
            {
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (v == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
                if (!pq.empty())
                {
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else

            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}