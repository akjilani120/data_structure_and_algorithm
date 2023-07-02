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
void insert_value(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void reverse_print(Node *&newHead, Node *cur)
{
    if (cur->next == NULL)
    {
        newHead = cur;
        return;
    }
    reverse_print(newHead, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
}
void palimdrom(Node *head)
{
    Node *temp = head;
    Node *newHead = NULL;
    Node *newTail = NULL;
    while (temp != NULL)
    {
        insert_value(newHead, newTail, temp->val);
        temp = temp->next;
    }

    reverse_print(newHead, newHead);
    int flag = 0;
    temp = head;
    Node *temp2 = newHead;
    while (temp != NULL && temp2 != NULL)
    {
        if (temp->val != temp2->val)
        {
            flag = 1;
        }

        temp = temp->next;
        temp2 = temp2->next;
    }
    if (flag == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
        {
            break;
        }
        else
        {
            insert_value(head, tail, value);
        }
    }
    palimdrom(head);
    return 0;
}