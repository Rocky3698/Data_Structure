#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int evaluatePostfix(string exp)
{
    stack<int> st;
    int i;

    for (i = 0; exp[i]; ++i)
    {
        if (exp[i] == ' ')
            continue;
        else if (isdigit(exp[i]))
        {
            int num = 0;
            // Extract full number
            while (isdigit(exp[i]))
            {
                num = num * 10 + (int)(exp[i] - '0');
                i++;
            }
            i--;
            st.push(num);
        }
        else
        {
            int val1 = st.top();
            st.pop();
            int val2 = st.top();
            st.pop();

            switch (exp[i])
            {
            case '+':
                st.push(val2 + val1);
                break;
            case '-':
                st.push(val2 - val1);
                break;
            case '*':
                st.push(val2 * val1);
                break;
            case '/':
                st.push(val2 / val1);
                break;
            }
        }
    }
    return st.top();
}

// Driver code
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string exp;
    getline(cin, exp);
    cout << evaluatePostfix(exp);
    return 0;
}

// This code is contributed by rathbhupendra
