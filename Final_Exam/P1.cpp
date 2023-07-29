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
        set<int> s;
        int n;
        cin >> n;
        // bool flag=true;
        while (n--)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        // if(s.size()==1)flag=false;
        // for(auto it=s.begin();it!=s.end();it++){
        //     cout<<*it<<" ";
        // }
        auto it = s.end();
        // it--;
        do
        {
            it--;
            cout << *it << " ";
        } while (it != s.begin());
        // if (flag)
        //     cout << *it << " ";
        cout << endl;
    }
    return 0;
}