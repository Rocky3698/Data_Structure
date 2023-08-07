#include <bits/stdc++.h>
using namespace std;
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
    TreeNode *Array_To_BST(vector<int> v, int l, int r)
    {
        if (l > r)
            return NULL;
        int mid = (l + r) / 2;
        TreeNode *root = new TreeNode(v[mid]);
        TreeNode *LeftNode = Array_To_BST(v, l, mid - 1);
        TreeNode *RightNode = Array_To_BST(v, mid + 1, r);
        root->left = LeftNode;
        root->right = RightNode;
        return root;
    }
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        return Array_To_BST(nums, 0, nums.size() - 1);
    }
};

int main()
{

    return 0;
}