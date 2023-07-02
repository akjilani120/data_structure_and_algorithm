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
void swap_data(Node *head)
{
    Node *temp = head;
    for (Node *i = temp; i != NULL; i = i->next)
    {
        for (Node *j = temp; j->next != NULL; j = j->next)
        {
            if (i->val < j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
    while (temp->next != NULL)
    {
        if (temp->val == temp->next->val)
        {
            temp->next = temp->next->next;
        }
        else if (temp->next == NULL)
        {
            break;
        }

        else if (temp->val != temp->next->val)
        {
            temp = temp->next;
        }
    }
}
void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
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
    swap_data(head);
    print(head);
    return 0;
}