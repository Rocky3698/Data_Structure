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
    set<int> st;
    bool findTarget(TreeNode *root, int k)
    {
        if (root == NULL)
            return false;
        if (st.find(k - root->val) != st.end())
            return true;
        else
            st.insert(root->val);
        return findTarget(root->left, k) || findTarget(root->right, k);
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    return 0;
}