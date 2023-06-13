#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i == (n / 2) + 1) && j == (n / 2) + 1)
            {
                cout << "X";
            }
            else if (i == j)
            {
                // if ((i == (n / 2) + 1) && (j == (n / 2) + 1))
                //     continue;
                cout << "\\";
            }
            else if (i + j == n + 1)
            {
                cout << "/";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}