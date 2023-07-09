#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    queue<string> person;
    int q;
    cin >> q;
    while (q--)
    {
        int qp;
        string name;
        cin >> qp;
        if (!qp)
        {
            cin >> name;
            person.push(name);
        }
        else if (!person.empty())
        {

            cout << person.front() << endl;
            person.pop();
        }
        else cout<<"Invalid"<<endl;
    }

    return 0;
}