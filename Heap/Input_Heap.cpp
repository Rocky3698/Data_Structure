#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void insert_heap(vector<int> &v, int x)
{
    v.push_back(x);
    int cur_idx = v.size() - 1;
    while (cur_idx != 0)
    {
        int parent_idx = (cur_idx - 1) / 2;
        if (v[parent_idx] > v[cur_idx])
            swap(v[parent_idx], v[cur_idx]);
        else
            break;
        cur_idx = parent_idx;
    }
}
void print_heap(vector<int> v)
{
    for (int val : v)
        cout << val << " ";
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int size;
    cin>>size;
    vector<int>v;
    while(size--){
        int x;
        cin>>x;
        insert_heap(v,x);
    }
    print_heap(v);

    return 0;
}