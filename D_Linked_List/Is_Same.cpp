#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        next = NULL;
        prev = NULL;
    }
};
void input(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
int size(Node *head)
{
    Node *tmp = head;
    int s = 0;
    while (tmp != NULL)
    {
        s++;
        tmp = tmp->next;
    }
    return s;
}
void IsSame(Node *head, Node *head1)
{
    Node *tmp = head;
    Node *tmp1 = head1;
    bool flag = true;
    while (tmp != NULL)
    {
        if (tmp->val != tmp1->val)
        {
            flag = false;
            break;
        }
        tmp = tmp->next;
        tmp1 = tmp1->next;
    }
    flag ? cout << "YES" << endl : cout << "NO" << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Node *head = NULL;
    Node *tail = NULL;
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        input(head, tail, val);
    }

    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        input(head1, tail1, val);
    }
    if (size(head) != size(head1))
        cout << "NO" << endl;
    else
        IsSame(head, head1);
    return 0;
}