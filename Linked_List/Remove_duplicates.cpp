#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == NULL)
            return head;
        ListNode *tmp = head;
        while (tmp->next != NULL)
        {
            if (tmp->val == tmp->next->val)
                tmp->next = tmp->next->next;
            if (tmp->next == NULL)
                break;
            else if (tmp->val != tmp->next->val)
                tmp = tmp->next;
        }
        return head;
    }
};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    return 0;
}