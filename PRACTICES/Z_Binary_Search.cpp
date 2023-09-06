#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long size, query;
    cin >> size >> query;
    vector<long long> v(size);
    for (long long i = 0; i < size; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    while (query--)
    {
        long long q;
        cin >> q;
        bool flag=false;
        long long start = 0, end = size - 1, mid;
        while (start <= end)
        {
            mid = (start + end) / 2;
            if (v[mid] == q)
            {
                flag = true;
                break;
            }
            else if (v[mid] > q)
                end = mid - 1;
            else
                start = mid + 1;
        }
        flag?cout<<"found"<<endl:cout<<"not found"<<endl;
    }

    return 0;
}