#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int size;
    cin>>size;
    vector<int> v(size),v1(size);
    for (int i = 0; i < size; i++)
    {
        cin>>v[i];
    }
    for (int i = 0; i < size; i++)
    {
        cin>>v1[i];
    }
    vector<int>v2(2*size);
    for (int i = 0; i < size; i++)
    {
        v2[i]=v1[i];
    }
    for (int i = size; i <2*size ; i++)
    {
        v2[i]=v[i-size];
    }
    
    for (int i = 0; i < size*2; i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    

    return 0;
}