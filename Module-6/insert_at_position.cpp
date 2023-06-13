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
void insert_at_any_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout << endl
         << "Insert any position success : " << pos << endl;
}
int main()
{
    Node *head = NULL;
    int op;
    while (true)
    {
        cout << "option : 1 Insert at tail  " << endl;
        cout << "option : 2 Print Linked in Insert " << endl;
        cout << "option : 3 Insert at any position  " << endl;
        cout << "option : 4 stop terminate  " << endl;
        cin >> op;

        if (op == 1)
        {
            int val;
            cout << "Please Enter value :  ";
            cin >> val;
            insert_at_node(head, val);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            int posi, val;
            cout << " Enter Position : ";
            cin >> posi;
            cout << " Enter value : ";
            cin >> val;
            insert_at_any_position(head, posi, val);
        }
        else
        {
            break;
        }
    }
    return 0;
}