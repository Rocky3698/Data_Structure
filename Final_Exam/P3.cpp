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
        int x;
        cin >> x;
        map<long long, int> mp;
        int max = INT_MIN;
        long long key = INT_MIN;
        while (x--)
        {
            long long x;
            cin >> x;
            mp[x]++;
            if ((mp[x] >= max && x >=key)||mp[x]>max)
            {
                max = mp[x];
                key = x;
            }
            // cout<<key<<" ";
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