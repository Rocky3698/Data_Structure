#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    map<string, int> mp;
    mp["Sakib al hasn"] = 79; // O(logN)
    mp.insert({"akib", 100});
    mp.insert({"akib", 150});
    mp["tamim"] = 79;

    // for (auto it = mp.begin(); it != mp.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl; // O(logN)
    // }

    cout << mp.count("akib") << endl;
    return 0;
}
