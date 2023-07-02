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
void any_position(Node *head, int pos, int value)
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
    cout << " insert any position";
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

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int pos, value;
        cin >> pos;
        if (pos > size(head))
        {
            cout << "Invalid index" << endl;
        }
        else if (pos == 0)
        {
            cin >> value;
            insert_head(head, tail, value);
        }
        else if (pos == size(head))
        {
            cin >> value;
            insert_tail(head, tail, value);
        }
        else if (pos < size(head))
        {
            int pos2;
            cin >> pos2;
            cin >> value;
            any_position(head, pos2, value);
        }
        cout << head->val << " " << tail->val << endl;
    }

    // while (true)
    // {

    //     else if (pos == -1)
    //     {
    //         break;
    //     }
    // }
    // print(head);
    return 0;
}