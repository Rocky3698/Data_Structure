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
int find_size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != 0)
    {
        count++;
        tmp = tmp->next;
    }

    return count;
}
bool is_sorted(Node *head)
{
    Node *tmp = head;
    int size = find_size(head);
    for (int i = 0; i < size - 1; i++)
    {
        if (tmp->val > tmp->next->val)
            return false;
        tmp = tmp->next;
    }
    return true;
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
    is_sorted(head) ? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}