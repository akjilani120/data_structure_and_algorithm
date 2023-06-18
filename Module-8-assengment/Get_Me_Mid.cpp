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
void insert_at_node(Node *&head, int val)
{

    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void linked_print(Node *head)
{
    int count = 0;
    Node *temp = head;
    for (Node *i = temp; i != NULL; i = i->next)
    {

        count++;
    }
    for (Node *i = temp; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val < j->val)
            {
                swap(i->val, j->val);
            }
        }
    }

    if (count % 2 == 0)
    {
        for (int i = 1; i <= count / 2 - 1; i++)
        {
            temp = temp->next;
        }
        cout << temp->val << " ";
        temp = temp->next;
        cout << temp->val;
    }
    else
    {
        for (int i = 1; i <= count / 2; i++)
        {
            temp = temp->next;
        }
        cout << temp->val << " ";
    }
}
int main()
{
    Node *head = NULL;

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
            insert_at_node(head, value);
        }
    }
    linked_print(head);
    return 0;
}