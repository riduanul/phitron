#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> frq(26, 0);
    for (int i = 0; i < s.length(); i++)
    {
        frq[s[i] - 'a']++;
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        if (frq[i - 'a'] > 0)
        {
            cout << i << " " << ':' << " " << frq[i - 'a'] << endl;
        }
    }

    return 0;
}