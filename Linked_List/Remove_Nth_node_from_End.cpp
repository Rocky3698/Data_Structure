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
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        if (head == NULL)
            return head;
        ListNode *tmp = head;
        int sz = 0;
        while (tmp != NULL)
        {
            sz++;
            tmp = tmp->next;
        }
        n = sz - n;
        ;
        if (n == 0)
        {
            ListNode *deleteNode = head;
            head = head->next;
            delete deleteNode;
        }
        else
        {
            tmp = head;
            for (int pos = 1; pos < n; pos++)
            {
                tmp = tmp->next;
            }
            ListNode *deleteNode = tmp->next;
            tmp->next = tmp->next->next;
            delete deleteNode;
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