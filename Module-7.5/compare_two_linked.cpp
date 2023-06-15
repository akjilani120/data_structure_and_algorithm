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
int reverse_print(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
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
    int firstLenth = reverse_print(firstHead);
    int secondLenth = reverse_print(secondtHead);
    if (firstLenth == secondLenth)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}