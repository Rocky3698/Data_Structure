#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int evaluatePostfix(string exp)
{
    stack<int> st;

    for (int i = 0; exp[i]; ++i)
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
            case '^':
                st.push(pow(val1, val2));
                break;
            }
        }
    }
    return st.top();
}
int precedence(char op)
{
    // Define operator precedence
    unordered_map<char, int> precedenceMap;
    precedenceMap['+'] = 1;
    precedenceMap['-'] = 1;
    precedenceMap['*'] = 2;
    precedenceMap['/'] = 2;
    precedenceMap['^'] = 3;
    return precedenceMap[op];
}

string infixToPostfix(const string &infix)
{
    string postfix;
    stack<char> operatorStack;

    for (char c : infix)
    {
        if (isalnum(c))
        {
            postfix += c;
        }
        else if (c == '(')
        {
            operatorStack.push(c);
        }
        else if (c == ')')
        {
            while (!operatorStack.empty() && operatorStack.top() != '(')
            {
                postfix += ' ';
                postfix += operatorStack.top();
                operatorStack.pop();
            }
            operatorStack.pop(); // Pop '('
        }
        else
        { // Operator
            while (!operatorStack.empty() && precedence(c) <= precedence(operatorStack.top()))
            {
                postfix += ' ';
                postfix += operatorStack.top();
                operatorStack.pop();
            }

            operatorStack.push(c);
            postfix += ' ';
        }
    }

    while (!operatorStack.empty())
    {
        postfix += ' ';
        postfix += operatorStack.top();
        operatorStack.pop();
    }

    return postfix;
}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string Eq;

    getline(cin, Eq);
    cout << evaluatePostfix(infixToPostfix(Eq));

    return 0;
}
