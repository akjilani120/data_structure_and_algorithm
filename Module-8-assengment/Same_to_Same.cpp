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
    else
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
    Node *secondHead = NULL;
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
            insert_at_node(head, value);
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
            insert_at_node(secondHead, value2);
        }
    }
    size(head);
    size(secondHead);

    int data = compare(head, secondHead);
    if (data == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}