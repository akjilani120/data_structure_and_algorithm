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
void reverse_print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
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
int compare(Node *head, Node *head2)
{
    Node *temp = head;
    Node *temp2 = head2;
    int flag = 1;
    if (size(temp) != size(temp2))
    {
        flag = 0;
    }
    else if (size(temp) == size(temp2))
    {
        while (temp != NULL && temp2 != NULL)
        {
            if (temp->val != temp2->val)
            {
                flag = 0;
            }
            temp = temp->next;
            temp2 = temp2->next;
        }
    }
    return flag;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
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
    while (true)
    {
        cin >> value2;
        if (value2 == -1)
        {
            break;
        }
        else
        {
            insert_input(head2, tail2, value2);
        }
    }

    int same = compare(head, head2);
    if (same == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}