#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    priority_queue<int, vector<int>, greater<int>> l;

    int size;
    cin >> size;
    while (size--)
    {
        int x;
        cin >> x;
        l.push(x);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int c;
        cin >> c;
        if (!c)
        {
            int x;
            cin >> x;
            l.push(x);
            cout << l.top() << endl;
        }
        else if (c == 1)
        {
            if (l.empty())
                cout << "Empty" << endl;
            else
                cout << l.top() << endl;
        }
        else if (c == 2)
        {
            if (l.empty())
                cout << "Empty" << endl;
            else
            {
                l.pop();
                if (l.empty())
                    cout << "Empty" << endl;
                else
                    cout << l.top() << endl;
            }
        }
    }
    return 0;
}