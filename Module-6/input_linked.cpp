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
void insert_at_tail(Node *&head, int val)
{

    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        cout << endl
             << "Insert at Head" << endl;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void print_linked_list(Node *head)
{
    Node *temp = head;
    cout << "Linked list is : ";
    while (temp != NULL)
    {

        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
};
int main()
{
    int inputValue;

    Node *head = new Node(NULL);
    while (true)
    {
        cin >> inputValue;
        if (inputValue == -1)

        {
            break;
        }
        insert_at_tail(head, inputValue);
    }
    print_linked_list(head);

    return 0;
}