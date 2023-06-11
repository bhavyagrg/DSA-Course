#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<char> st;
    string str;
    cout << "Enter the string \n";
    cin >> str;

    for (auto &el : str)
    {
        if (el == '(' || el == '{' || el == '[')
        {
            st.push(el);
        }
        else if ((el == ')' && st.top() == '(') || (el == '}' && st.top() == '{') || (el == ']' && st.top() == '['))
        {
            st.pop();
        }
    }

    if (st.empty())
        cout << str << " is balanced \n";
    else
        cout << str << " is not balanced \n";

    return 0;
}