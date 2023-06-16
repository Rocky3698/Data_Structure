#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
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
    tail = newNode;
}
int FindSize(Node *head)
{
    Node *tmp = head;
    int size = 0;
    while (tmp != NULL)
    {
        size++;
        tmp = tmp->next;
    }
    return size;
}
void IsSame(Node *head, Node *head2)
{
    Node *tmp1 = head;
    Node *tmp2 = head2;
    int size = FindSize(head);
    bool flag = true;
    for (int i = 0; i < size; i++)
    {
        if (tmp1->val != tmp2->val)
        {
            flag = false;
            break;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
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
    Node *head2 = NULL;
    Node *tail2 = NULL;
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
        input(head2, tail2, val);
    }
    if (FindSize(head) != FindSize(head2))
        cout << "NO" << endl;
    else
        IsSame(head, head2);

    return 0;
}