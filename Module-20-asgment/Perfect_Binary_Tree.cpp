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

void tree_print(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<pair<Node *, int>> q;

    q.push({root, 1});
    int higt = 0;
    int totalVl = 0;
    while (!q.empty())
    {
        totalVl++;
        pair<Node *, int> f = q.front();
        Node *node = f.first;
        int level = f.second;
        q.pop();

        if (level)
        {
            higt = level;
        }

        if (node->left)
        {
            q.push({node->left, level + 1});
        }
        if (node->right)
        {
            q.push({node->right, level + 1});
        }
    }
    int maxHight = pow(2, higt) - 1;
    if (maxHight == totalVl)
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
    Node *root = input_tree();

    tree_print(root);

    return 0;
}