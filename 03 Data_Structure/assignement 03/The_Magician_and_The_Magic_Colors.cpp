#include <bits/stdc++.h>
using namespace std;
// Red+Blue = Purple
// Red+Green = Yellow
// Blue+Green = Cyan

int main()
{
    int t;
    cin >> t;
    stack<char> st;
    while (t--)
    {
        int num;
        cin >> num;
        string s;
        cin >> s;
        for (char c : s)
        {
            if (st.empty())
            {
                st.push(c);
            }
            else
            {
                if (c == st.top())
                {
                    st.pop();
                }
                else if (c == 'R' && st.top() == 'B' || c == 'B' && st.top() == 'R')
                {
                    st.pop();
                    if (!st.empty() && st.top() == 'P')
                    {
                        st.pop();
                    }
                    else
                    {

                        st.push('P');
                    }
                }
                else if (c == 'R' && st.top() == 'G' || c == 'G' && st.top() == 'R')
                {
                    st.pop();
                    if (!st.empty() && st.top() == 'Y')
                    {
                        st.pop();
                    }
                    else
                    {

                        st.push('Y');
                    }
                }
                else if (c == 'B' && st.top() == 'G' || c == 'G' && st.top() == 'B')
                {
                    st.pop();
                    if (!st.empty() && st.top() == 'C')
                    {
                        st.pop();
                    }
                    else
                    {

                        st.push('C');
                    }
                }
                else
                {
                    st.push(c);
                }
            }
        }
        stack<char> newSt;
        while (!st.empty())
        {
            newSt.push(st.top());
            st.pop();
        }
        if (newSt.empty())
        {
            cout << " ";
        }
        else
        {
            while (!newSt.empty())
            {
                cout << newSt.top();
                newSt.pop();
            }
        }
        cout << endl;
    }
    return 0;
}
