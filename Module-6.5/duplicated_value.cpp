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
void insurt_input(Node *&head, int value)
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
void duplicate_value(Node *head)
{
    int count = 0;
    int flag = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    int endValue = count;
    for (int i = 0; i < count; i++)
    {
        cout << temp->val << " ";
        temp = temp->next;
        endValue--;
        if (temp[i]->val == temp[endValue]->val)
        {
            flag = 1;
        }
    }
    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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
        else if (value >= 0)
        {
            insurt_input(head, value);
        }
    }
    duplicate_value(head);

    return 0;
}