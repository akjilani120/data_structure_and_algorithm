#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int szt = 0;
    void push(int value)
    {
        szt++;
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }
    void pop()
    {
        szt--;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL)
        {
            tail = NULL;
        }
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return szt;
    }
    bool empty()
    {
        if (szt == 0)
            return true;
        else
            false;
    }
};

int main()
{

    myQueue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.pop();
    cout << q.front() << endl;
    return 0;
}