#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int calPoints(vector<string> &operations)
{
    stack<int> st;
    int ans = 0;
    for (auto s : operations)
    {
        if (s == "D")
        {
            st.push(st.top() * 2);
            cout<<st.top()<<"d"<<endl;
        }
        else if (s == "C")
        {
            if (!st.empty())
                st.pop();
            if(!st.empty())
            cout<<st.top()<<"C"<<endl;
        }
        else if (s == "+")
        {
            int t = st.top();
            st.pop();
            int t1 = st.top();
            st.pop();
            st.push(t);
            st.push(t1);
            st.push(t + t1);
            cout<<t<<t1<<t+t1;
        }
        else
        {
            st.push(stoi(s));
        }
    }
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<string> v = {"5","-2","4","C","D","9","+","+"};
    cout<<calPoints(v);
    return 0;
}