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
        if (temp == NULL)
        {
            cout << endl
                 << "Invailed Index" << endl;
            return;
        }
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout << endl
         << "Insert any position success : " << pos << endl;
}
void insert_at_head(Node *&head, int value)
{
    Node *newNode = new Node(value);

    newNode->next = head;
    head = newNode;
    cout << endl
         << "Insert at head completed" << endl;
}
void delete_from_position(Node *head, int posi)
{
    Node *temp = head;
    for (int i = 1; i <= posi - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << endl
                 << "Invailed Index" << endl;
            return;
        }
    }
    if (temp->next == NULL)
    {
        cout << endl
             << "Invailed Index" << endl;
        return;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
    cout << endl
         << "Any Linked deleted" << endl;
}
void delele_head(Node *&head)
{
    if (head == NULL)
    {
        cout << endl
             << "Invailed Index" << endl;
        return;
    }

    Node *deleteHead = head;
    head = head->next;
    delete deleteHead;
    cout << endl
         << "Delete Head" << endl;
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
        cout << "option : 4 Insert at head  " << endl;
        cout << "option : 5 delete position  " << endl;
        cout << "option : 6 delete head  " << endl;
        cout << "option : 7 stop terminate  " << endl;
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
             if (posi == 0)
            {
                insert_at_head(head, val);
            }
            else
            {
                insert_at_any_position(head, posi, val);
            }
        }
        else if (op == 4)
        {
            int val;

            cout << " Enter value : ";
            cin >> val;
            insert_at_head(head, val);
        }

        else if (op == 5)
        {
            int posi;
            cout << endl
                 << "Enter delete position : " << endl;
            cin >> posi;
            if (posi == 0)
            {
                delele_head(head);
            }
            else
            {
                delete_from_position(head, posi);
            }
        }
        else if (op == 6)
        {
            delele_head(head);
        }
        else if (op == 7)
        {
            break;
        }
    }
    return 0;
}