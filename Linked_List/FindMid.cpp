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
void print(Node *head)
{
    Node *tmp = head;
    int size = FindSize(head);
    for (int i = 1; i <= size; i++)
    {
        if (i == size / 2)
            break;
        tmp = tmp->next;
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
    print(head);
    return 0;
}