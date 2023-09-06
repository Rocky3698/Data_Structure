#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
string removeOuterParentheses(string s)
{
    string ans = "";
    int openingPerenthesis = 0;
    for (char c : s)
    {
        if (c == '(' && openingPerenthesis++ > 0)
            ans += c;
        if (c == ')' && openingPerenthesis-- > 1)
            ans += c;
    }

    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    cout << removeOuterParentheses(s);

    return 0;
}