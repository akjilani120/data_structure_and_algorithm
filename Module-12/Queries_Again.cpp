#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_head(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insert_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
int size(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}
void insert_any_position(Node *head, int pos, int value)
{
    Node *newNode = new Node(value);
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = temp;
};
void print_linked_list(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
void reverse_print(Node *tail)
{

    Node *temp2 = tail;

    while (temp2 != NULL)
    {
        cout << temp2->val << " ";
        temp2 = temp2->prev;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int n;
    cin >> n;
    int pos;
    for (int i = 1; i <= n; i++)
    {
        cin >> pos;
        if (pos > size(head))
        {
            int value;
            cin >> value;
            if (i == 1)
            {
                cout
                    << "Invalid";
            }
            else
            {
                cout
                    << endl
                    << "Invalid";
            }
        }
        else if (pos == 0)
        {
            int value;
            cin >> value;
            insert_head(head, tail, value);
        }
        else if (pos < size(head))
        {
            int value;
            cin >> value;
            insert_any_position(head, pos, value);
        }

        else if (pos == size(head))
        {
            int value;
            cin >> value;
            insert_tail(head, tail, value);
        }
        if (pos <= size(head))
        {
            if (i == 1)
            {
                cout
                    << "L -> ";
                print_linked_list(head);
                cout << endl
                     << "R -> ";
                reverse_print(tail);
            }
            else
            {
                cout << endl
                     << "L -> ";
                print_linked_list(head);
                cout << endl
                     << "R -> ";
                reverse_print(tail);
            }
        }
    }

    return 0;
}