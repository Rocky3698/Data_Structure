#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    bool num_key = true;
    stack<string> home;
    string end, s;
    cin >> s;
    
    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];

        if (c == '#')
        {
            (num_key) ? num_key = false : num_key = true;
            continue;
        }
        else if (c == '<')
        {
            string temp;
            while (true)
            {
                i++;
                if (i == s.size() || s[i] == '>')
                    break;
                if (s[i] == '#')
                {
                    (num_key) ? num_key = false : num_key = true;
                    continue;
                }
                if (s[i] == '<')
                {
                    if (temp.size())
                        home.push(temp);
                    temp.clear();
                    continue;
                }
                if (s[i] == '*' || (isdigit(s[i]) && !num_key))
                {
                    if (s[i] == '*' && temp.size())
                        temp.pop_back();
                    continue;
                }
                temp.push_back(s[i]);
            }
            c = s[i];
            home.push(temp);
        }
        else if (c == '>')
            continue;
        else if (c == '*')
        {
            if (end.size())
                end.pop_back();
            continue;
        }
        else
        {
            if (isdigit(c) && !num_key)
                continue;
            end.push_back(c);
        }
    }
    while (!home.empty())
    {
        cout << home.top();
        home.pop();
    }
    cout << end << endl;

    return 0;
}