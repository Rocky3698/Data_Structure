#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void reverse(queue<int> &q)
{
    if (q.empty())
        return;
    int f = q.front();
    q.pop();
    reverse(q);
    q.push(f);
}
void print(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    queue<int> q;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    reverse(q);
    print(q);
    return 0;
}