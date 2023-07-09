#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        stack<char> S;
        cin >> s;
        // cout << s << " ";
        for (char c : s)
        {
            if (S.empty())
                S.push(c);

            else if (!S.empty())
            {
                if (S.top() == c)
                    S.push(c);
                else
                {
                    S.pop();
                }
            }
        }

        if (S.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}