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
void insert_at_head(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
}
void insert_at_tail(Node *&head, Node *&tail, int value)
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
void print_linked_list(Node *head)
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

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int pos, value;
        cin >> pos >> value;
        if (pos == 0)
        {
            insert_at_head(head, tail, value);
        }
        else if (pos == 1)
        {
            insert_at_tail(head, tail, value);
        }
        cout << head->val << " " << tail->val << endl;
    }

    return 0;
}