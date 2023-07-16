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

void level_order(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    int sum1 = 0;
    int sum2 = 0;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        if (f->left)
        {
            sum1 = sum1 + f->left->val;
            q.push(f->left);
        }
        if (f->right)
        {
            sum2 = sum2 + f->right->val;
            q.push(f->right);
        }
    }
    cout << sum1 + sum2 + root->val << endl;
}
int main()
{
    Node *root = input_tree();
    level_order(root);

    return 0;
}