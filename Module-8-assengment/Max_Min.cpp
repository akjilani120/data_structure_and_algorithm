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
void print_linked_list(Node *head)
{
    Node *temp = head;
    int max = INT_MIN;
    int min = INT_MAX;
    for (Node *i = temp; i != NULL; i = i->next)
    {
        if (i->val > max)
        {
            max = i->val;
        }
        if (i->val < min)
        {
            min = i->val;
        }
    }
    cout << max << " " << min;
};
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
    print_linked_list(head);
    return 0;
}