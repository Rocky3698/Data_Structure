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
        int n;
        cin >> n;
        vector<int> v;
        vector<int> v2;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.emplace_back(x);
            v2.emplace_back(x);
        }
        sort(v.begin(), v.end());
        int Min = v[0];
        int Max = v[v.size() - 1];
        int maxpos = 0;
        int minpos = 0;
        int i = -1;
        for (int x : v2)
        {
            i++;
            if (x == Max)
            {
                maxpos = v.size() - 1 - i-minpos;
            }
            else if (x == Min)
            {
                minpos = i;
            }
        }
        cout << max(maxpos, minpos) << endl;
    }

    return 0;
}