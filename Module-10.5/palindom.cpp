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
void insert_input(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void linked_print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
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
void check_palindrom(Node *head, Node *tail)
{
    Node *temp = head;
    int flag = 0;
    int dataSize = size(head);
    for (int i = 1; i <= dataSize / 2; i++)
    {
        if (temp->val != tail->val)
        {
            flag = 1;
        }

        temp = temp->next;
        tail = tail->prev;
    }
    if (flag == 1)

    {

        cout << "NO" << endl;
    }
    else
    {

        cout << "YES" << endl;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int value, value2;
    while (true)
    {
        cin >> value;
        if (value == -1)
        {
            break;
        }
        else
        {
            insert_input(head, tail, value);
        }
    }
    check_palindrom(head, tail);
    // int same = compare(head, head2);
    // if (same == 0)
    // {
    //     cout << "NO" << endl;
    // }
    // else
    // {
    //     cout << "YES" << endl;
    // }

    return 0;
}