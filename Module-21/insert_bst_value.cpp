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

void insert_bst(Node *&root, int x)
{
    if (root == NULL)
    {
        root = new Node(x);
        return;
    }
    if (x < root->val)
    {
        if (root->left == NULL)
        {
            root->left = new Node(x);
        }
        else
        {
            insert_bst(root->left, x);
        }
    }
    else
    {
        if (root->right == NULL)
        {
            root->right = new Node(x);
        }
        else
        {
            insert_bst(root->right, x);
        }
    }
}
void tree_output(Node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    tree_output(root->left);
    tree_output(root->right);
}
int main()
{
    Node *root = input_tree();
    int xl;
    cin >> xl;
    insert_bst(root, xl);
    tree_output(root);
    return 0;
}