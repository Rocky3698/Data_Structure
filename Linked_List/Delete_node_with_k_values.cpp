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
    ListNode *removeElements(ListNode *head, int val)
    {
        if (head == NULL)
            return head;
        while (head->val == val)
        {
            ListNode *deleteNode = head;
            if (head->next == NULL)
            {
                head = NULL;
                break;
            }
            else
                head = head->next;
            delete deleteNode;
        }
        ListNode *tmp = head;
        if (tmp == NULL)
            return head;
        while (tmp->next != NULL)
        {
            if (tmp->next->val == val)
            {
                ListNode *deleteNode = tmp->next;
                if (tmp->next->next == NULL)
                {
                    tmp->next = NULL;
                    break;
                }
                else
                    tmp->next = tmp->next->next;
                delete deleteNode;
            }
            if (tmp->next->val == val)
                continue;
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