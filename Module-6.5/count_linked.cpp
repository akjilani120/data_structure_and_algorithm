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
        cout << endl
             << "Successfully head  in linked" << endl;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;

        cout << endl
             << "Successfully insert value in linked" << endl;
    }
}
void linke_print(Node *head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
void get_size(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    cout << count;
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

        // cin >> opt;
        // if (opt == 1)
        // {
        //     int value;
        //     cin >> value;
        //     insurt_input(head, value);
        // }
        // else if (opt == 2)
        // {
        //     linke_print(head);
        // }
        // else if (opt == 3)
        // {
        //     break;
        // }
    }
    get_size(head);
    return 0;
}