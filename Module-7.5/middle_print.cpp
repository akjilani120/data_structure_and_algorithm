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
void insert_value(Node *&head, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
int count_linked(Node *head)
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
int middle_value(Node *head)
{
    Node *temp = head;
    for (Node *i = temp; i != NULL; i = i->next)
    {
        //  if (i->val == count_linked(head)/2)
        //  {

        //  }
        // cout << i->val;
    }
}
int main()
{
    Node *firstHead = NULL;
    Node *secondtHead = NULL;
    int pos, pos2;
    while (true)
    {
        cin >> pos;
        if (pos == -1)
        {
            break;
        }
        else
        {

            insert_value(firstHead, pos);
        }
    }

    while (true)
    {
        cin >> pos2;
        if (pos2 == -1)
        {
            break;
        }
        else
        {
            insert_value(secondtHead, pos2);
        }
    }
    middle_value(firstHead);
    cout << endl;
    middle_value(secondtHead);
    return 0;
}