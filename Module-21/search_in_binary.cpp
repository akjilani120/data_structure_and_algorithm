#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *v = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *left;
        Node *right;
        if (l == -1)
        {
            left = NULL;
        }
        else
        {
            left = new Node(l);
        }
        if (r == -1)
        {
            right = NULL;
        }
        else
        {
            right = new Node(r);
        }
        v->left = left;
        v->right = right;
        if (v->left)
        {
            q.push(v->left);
        }
        if (v->right)
        {
            q.push(v->right);
        }
    }
    return root;
}
bool search(Node *root, int x)
{
    if (root == NULL)
        return false;
    if (root->val == x)
    {
        return true;
    }
    if (x < root->val)
    {
        return search(root->left, x);
    }
    else
    {
        return search(root->right, x);
    }
}
int main()
{
    Node *root = input_tree();
    int xl;
    cin >> xl;
    bool check = search(root, xl);
    if (check == true)
    {
        cout << "Yes, Found" << endl;
    }
    else
    {
        cout << "No, Not Found" << endl;
    }
    return 0;
}