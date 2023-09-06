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
void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL && head == NULL)
    {
        newNode->next = head;
        head = newNode;
        tail = newNode;
    }
    newNode->next = head;
    head = newNode;
}
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL && head == NULL)
    {
        newNode->next = head;
        head = newNode;
        tail = newNode;
    }
    newNode->next = tail;
    tail = newNode;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int pos, val;
        cin >> pos >> val;
        if (pos)
            insert_tail(head, tail, val);
        else
            insert_head(head, tail, val);

        cout << head->val << " " << tail->val << endl;
    }

    return 0;
}