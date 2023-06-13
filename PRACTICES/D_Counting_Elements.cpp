#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int size;
    cin >> size;
    int count = 0;
    int same = 0;
    vector<int> v(size);
    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < size - 1; i++)
    {
        if (v[i] + 1 == v[i + 1])
        {
            count++;
            count += same;
            same = 0;
        }
        else if (v[i] == v[i + 1])
            same++;
        else
            same = 0;
    }
    cout << count << endl;
    return 0;
}