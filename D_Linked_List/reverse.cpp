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
void reverse_it(Node *head, Node *tail)
{
    Node *h = head;
    Node *t = tail;
    while ((h->next != t) && (h != t))
    {
        swap(h->val, t->val);
        h = h->next;
        t = t->prev;
    }
    swap(h->val, t->val);
}
void print(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        input(head, tail, val);
    }
    reverse_it(head, tail);
    print(head);
    return 0;
}