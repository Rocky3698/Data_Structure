#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // priority_queue<int>p;//max heap
    priority_queue<int, vector<int>, greater<int>> pq;//min heap
    while (true)
    {
        int c;
        cin >> c;
        if (c == 0)
        {
            int x;
            cin >> x;
            pq.push(x); // O(logN)
        }
        else if (c == 1)
        {
            pq.pop(); // O(logN)
        }
        else if (c == 2)
        {
            cout << pq.top() << endl; // O(1)
        }
        else
        {
            break;
        }
    }

    return 0;
}