#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution
{
public:
    TreeNode *BST(TreeNode *root, int key)
    {
        if (!root)
            return NULL;
        if (root->val == key)
            return root;
        if (root->val > key)
        {
            return BST(root->left, key);
        }
        else
        {
            return BST(root->right, key);
        }
        return NULL;
    }
    TreeNode *searchBST(TreeNode *root, int val)
    {
        return BST(root, val);
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    return 0;
}