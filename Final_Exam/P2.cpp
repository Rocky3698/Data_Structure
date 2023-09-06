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
    cin.ignore();
    while (t--)
    {

        int max = INT_MIN;
        string key, pkey;
        string s;
        getline(cin, s);
        string w;
        stringstream ss(s);
        map<string, int> mp;
        while (ss >> w)
        {
            mp[w]++;
            if (mp[w] > max)
            {
                max = mp[w];
                key=w;
            }
        }
        // for (auto it = mp.begin(); it != mp.end(); it++)
        // {
        //     if (it->second > max)
        //     {
        //         max = it->second;
        //         key = it->first;
        //     }
        // }
        cout << key << " " << max << endl;
    }
    return 0;
}