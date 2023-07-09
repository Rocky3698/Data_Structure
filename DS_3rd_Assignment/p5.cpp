#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void pr(stack<char> s)
{
    if (s.empty())
        return;
    char x = s.top();
    s.pop();
    pr(s);
    cout << x;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int size;
        char prev;
        cin >> size;
        string s;
        cin >> s;
        // cout<<s<<endl;
        stack<char> S;
        for (char c : s)
        {
            if (S.empty())
            {
                S.push(c);
            }
            else
            {
                if (c == S.top())
                    S.pop();
                else if ((S.top() == 'G' && c == 'R') || (S.top() == 'R' && c == 'G'))
                {
                    // if (prev == 'Y')
                    // {
                    //     S.pop();
                    //     S.pop();
                    // }
                    // else S.push('Y');
                    S.pop();
                    if (!S.empty() && S.top() == 'Y')
                        S.pop();
                    else
                        S.push('Y');
                }
                else if ((S.top() == 'B' && c == 'G') || (S.top() == 'G' && c == 'B'))
                {
                    // if (prev == 'C')
                    // {
                    //     S.pop();
                    //     S.pop();
                    // }
                    // else S.push('C');
                    S.pop();
                    if (!S.empty() && S.top() == 'C')
                        S.pop();
                    else
                        S.push('C');
                }
                else if ((S.top() == 'R' && c == 'B') || (S.top() == 'B' && c == 'R'))
                {
                    // if (prev == 'P')
                    // {
                    //     S.pop();
                    //     S.pop();
                    // }
                    // else S.push('P');
                    S.pop();
                    if (!S.empty() && S.top() == 'P')
                        S.pop();
                    else
                        S.push('P');
                }
                else
                {
                    // prev = S.top();
                    S.push(c);
                }
            }
        }
        if (S.empty())
            cout << endl;
        else
        {
            // while (!S.empty())
            // {
            //     cout << S.top();
            //     S.pop();
            // }
            pr(S);
            cout << endl;
        }
    }
    return 0;
}