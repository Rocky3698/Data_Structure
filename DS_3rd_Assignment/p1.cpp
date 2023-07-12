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
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
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
class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        (tail == NULL) ? head = NULL : tail->next = NULL;
        delete deleteNode;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (!sz)
            return true;
        else
            return false;
    }
};

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
            delete deleteNode;
            return;
        }
        head->prev = NULL;
        delete deleteNode;
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (!sz)
            return true;
        else
            return false;
    }
};
int main()
{
    //drive code
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    myStack S;
    myQueue Q;
    int qS, sS;
    cin >> qS >> sS;
    while (sS--)
    {
        int x;
        cin >> x;
        S.push(x);
    }
    while (qS--)
    {
        int x;
        cin >> x;
        Q.push(x);
    }

    Node *head = NULL;
    Node *tail = NULL;
    Node *head1 = NULL;
    Node *tail1 = NULL;
    while (!Q.empty())
    {
        input(head, tail, Q.front());
        Q.pop();
    }
    while (!S.empty())
    {
        input(head1, tail1, S.top());
        S.pop();
    }

    if (size(head) == size(head1))
        IsSame(head, head1);
    else
        cout << "NO" << endl;
    return 0;
}