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
void sort(Node *head, Node *tail)
{
    for (Node *i = head; i != tail; i = i->next)
    {
        for (Node *j = i->next; j != tail->next; j = j->next)
        {
            if (i->val < j->val)
                swap(i->val, j->val);
        }
    }
}
void print(Node *head)
{
    Node *tmp = head;
    int size = FindSize(head);
    for (int i = 1; i <= size; i++)
    {
        if (i == size / 2)
            break;
        // cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    // cout<<endl;
    if(tmp==NULL){
        cout<<head->val<<endl;
        return;
    }
    (size % 2) ? cout << tmp->next->val << " " << endl : cout << tmp->val << " " << tmp->next->val << endl;
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
    sort(head, tail);
    print(head);
    return 0;
}