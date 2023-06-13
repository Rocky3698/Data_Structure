#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    char c;
    vector<int> frequency(26, 0);
    while (cin >> c)
    {
        frequency[c - 'a']++;
    }
    int i = 0;
    for (int a : frequency)
    {
        if (a)
        {
            cout << char(i + 'a') << " "
                 << ":"
                 << " " << a << endl;
        }
        i++;
    }

    return 0;
}