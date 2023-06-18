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
void insert_at_node(Node *&head, Node *&tail, int val)
{

    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void reverse_print(Node *n)
{

    if (n == NULL)
    {

        return;
    }

    reverse_print(n->next);
    cout << n->val << " ";
}
void reverse_print2(Node *n)
{
    if (n == NULL)
    {

        return;
    }

    cout << n->val << " ";
    reverse_print2(n->next);
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
            insert_at_node(head, tail, value);
        }
    }

    reverse_print(head);
    cout << endl;
    reverse_print2(head);
    return 0;
}