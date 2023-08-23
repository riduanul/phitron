#include <bits/stdc++.h>
using namespace std;
string kevinStackProblem(string &s)
{
    stack<char> ch;
    string st;
    for (char c : s)
    {
        ch.push(c);
    }
    while (!ch.empty())
    {
        s += ch.top();
        ch.pop();
    }
    cout << s;
    return s;
}
int main()
{
    string s = "codeninjas";
    kevinStackProblem(s);
    return 0;
}