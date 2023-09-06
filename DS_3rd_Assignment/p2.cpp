#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    stack<int> S;
    queue<int> Q;
    list<int> L1, L2;
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
    while (!Q.empty())
    {
        L1.push_back(Q.front());
        Q.pop();
    }
    while (!S.empty())
    {
        L2.push_back(S.top());
        S.pop();
    }
    if (L1.size() != L2.size())
    {
        cout << "NO" << endl;
        return 0;
    }
    auto it1 = L1.begin();
    auto it2 = L2.begin();
    while (it1 != L1.end() && it2 != L2.end())
    {
        if (*it1 != *it2)
        {
            cout << "NO" << endl;
            return 0;
        }
        it1++;
        it2++;
    }
    cout << "YES" << endl;

    return 0;
}