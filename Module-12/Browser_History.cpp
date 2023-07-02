#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string val;
    Node *next;
    Node *pre;
    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
};
void insert_list(Node *&head, Node *&tail, string v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->pre = tail;
    tail = tail->next;
}
void print_main_list(Node *n)
{
    if (n == NULL)
        return;
    cout << n->val << " ";
    print_main_list(n->next);
}
void print_reverse_list(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->pre;
    }
}
int size(Node *head)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
void check_value(Node *head, Node *tail, string value, int *&checkIndex)
{
    Node *temp = head;
    Node *temp2 = tail;

    for (int i = 1; i <= size(head); i++)

    {
        if (temp->val == value)
        {
            cout << temp->val << endl;
            *checkIndex = i;
        }

        temp = temp->next;
    }
    string extraValue;
    if (value == "prev" || value == "next")
    {
        extraValue = value;
        *checkIndex = *checkIndex;
    }

    int special = *checkIndex;

    if (extraValue == "prev")
    {
        cout << "it is ok 1 " << endl;
        for (int i = 1; i <= size(head); i++)
        {
            if (i == special)
            {
                cout << temp2->val << endl;
                cout << "it is ok 2 " << endl;
            }

            temp2 = temp2->pre;
        }
    }

    else if (extraValue == "next")
    {
        for (int i = 1; i <= special; i++)
        {

            temp = temp->next;
        }
        cout << temp->val << endl;
        *checkIndex = *checkIndex + 1;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    string val;
    while (true)
    {
        cin >> val;
        if (val == "end")
            break;
        else
        {

            insert_list(head, tail, val);
        }
    }
    int n;
    int indexValue;
    int *pointer = &indexValue;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        string val;
        cin >> val;
        check_value(head, tail, val, pointer);
    }

    cout << "pointer value " << *pointer;
}