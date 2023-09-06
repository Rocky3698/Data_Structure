#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long size,query;
    cin>>size>>query;
    vector<long long>v(size+1);
    vector<long long>sum(size+1,0);
    for (long long i = 1; i <= size; i++)
    {
        cin>>v[i];
        sum[i]+=(sum[i-1]+v[i]);
    }
    while (query--)
    {
        long long a,b;
        cin>>a>>b;
        cout<<sum[b]-sum[a-1]<<endl;
    }
    // for(int a:sum)cout<<a<<endl;
    
    return 0;
}