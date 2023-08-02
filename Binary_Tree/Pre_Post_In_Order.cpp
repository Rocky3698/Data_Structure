#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
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
void preOrder(Node *root)
{
    // root->left->right
    if (root == NULL)
        return;
    cout << root->val << " ";
    preOrder(root->left);
    preOrder(root->right);
}
void PostOrder(Node *root)
{
    // left->right->root
    if (root == NULL)
        return;
    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->val << " ";
}
void InOrder(Node *root)
{
    // left->root->right
    if (root == NULL)
        return;
    InOrder(root->left);
    cout << root->val << " ";
    InOrder(root->right);
}

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *left;
        Node *right;
        if (l == -1)
            left = NULL;
        else
            left = new Node(l);
        if (r == -1)
            right = NULL;
        else
            right = new Node(r);
        f->left = left;
        f->right = right;
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return root;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Node *root = input_tree();
    preOrder(root);
    cout << endl;
    PostOrder(root);
    cout << endl;
    InOrder(root);
    cout << endl;
    return 0;
}