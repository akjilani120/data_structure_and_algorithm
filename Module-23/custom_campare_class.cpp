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
            if (a.roll < b.roll)
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
    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks;
        pq.pop();
        cout << endl;
    }

    return 0;
}