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
void FindMaxMin(Node *head)
{
    Node *tmp = head;
    int min = INT_MAX;
    int max = INT_MIN;
    int size = FindSize(head);
    for (int i = 0; i < size; i++)
    {
        if (tmp->val > max)
            max = tmp->val;
        if (tmp->val < min)
            min = tmp->val;
        tmp = tmp->next;
    }
    cout << min << " " << max << endl;
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
    FindMaxMin(head);

    return 0;
}