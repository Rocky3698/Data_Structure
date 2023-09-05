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
    int sum = 0;
    void BST_SUM(TreeNode *root, int low, int high)
    {
        if (root == NULL)
            return;
        BST_SUM(root->left, low, high);
        if (root->val >= low && root->val <= high)
            sum += root->val;
        BST_SUM(root->right, low, high);
    }
    int rangeSumBST(TreeNode *root, int low, int high)
    {
        BST_SUM(root, low, high);
        return sum;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    return 0;
}