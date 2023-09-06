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
    ListNode *swapNodes(ListNode *head, int k)
    {
        int sz = 0;
        if (head == NULL)
            return head;
        ListNode *tmp = head;
        while (tmp != NULL)
        {
            sz++;
            tmp = tmp->next;
        }
        // if(sz==1)return head;
        tmp = head;
        ListNode *tmp1 = head;
        // if(sz==2){
        //     swap(tmp->val,tmp->next->val);
        //     return head;
        // }
        for (int i = 1; i < k; i++)
        {
            tmp = tmp->next;
        }
        for (int i = 0; i < sz - k; i++)
        {
            tmp1 = tmp1->next;
        }
        // if(sz==k){
        //     swap(tmp->val,tmp1->val);
        //     return head;
        // }
        swap(tmp->val, tmp1->val);
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