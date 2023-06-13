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
    vector<int> v(size);
    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < size; i++)
    {
        if (v[i] < 0)
            v[i] = 2;
        else if (v[i] > 0)
            v[i] = 1;
    }
    for (int a : v)
    {
        cout << a << " ";
    }
    cout << endl;

    return 0;
}