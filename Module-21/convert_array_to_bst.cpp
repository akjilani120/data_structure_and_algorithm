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
void tree_output(Node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    tree_output(root->left);
    tree_output(root->right);
}
Node *convert(int ar[], int n, int l, int r)
{
    if (l > r)
        return NULL;
    int mid = (l + r) / 2;
    Node *root = new Node(ar[mid]);
    Node *leftRoot = convert(ar, n, l, mid - 1);
    Node *rightRoot = convert(ar, n, mid + 1, r);
    root->left = leftRoot;
    root->right = rightRoot;
    return root;
}
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    Node *root = convert(ar, n, 0, n - 1);
    tree_output(root);
    return 0;
}