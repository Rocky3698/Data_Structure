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
        tail = newNode;
    }
    void pop()
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        if (tail = NULL)
            head = NULL;
        else
            tail->next = NULL;
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
        if (size)
            return false;
        else
            return true;
    }
};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    myStack s1, s2;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        s1.push(x);
    }
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        s2.push(x);
    }
    if(s1.size()!=s2.size())cout<<"NO"<<endl;
    else{
        while(!s1.empty()){
            if(s1.top()!=s2.top()){
                cout<<"NO"<<endl;
                return 0;
            }
            s1.pop();
            s2.pop();
        }
        cout<<"YES"<<endl;
    }

    return 0;
}