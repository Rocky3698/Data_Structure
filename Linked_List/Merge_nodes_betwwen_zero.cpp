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
    ListNode *mergeNodes(ListNode *head)
    {
        if (head == NULL)
            return head;
        ListNode *deleteNode = head;
        head = head->next;
        delete deleteNode;
        ListNode *head1 = NULL;
        ListNode *tmp = head;
        ListNode *tail = NULL;
        int sum = 0;
        while (tmp != NULL)
        {
            if (tmp->val)
            {
                sum += tmp->val;
            }
            else
            {
                insert(head1, tail, sum);
                sum = 0;
            }
            ListNode *deleteNode = tmp;
            tmp = tmp->next;
            delete deleteNode;
        }
        return head1;
    }
    void insert(ListNode *&head, ListNode *&tail, int sum)
    {
        ListNode *newNode = new ListNode(sum);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }
};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    return 0;
}