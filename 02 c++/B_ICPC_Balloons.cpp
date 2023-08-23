#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int count[26] = {0};
    int sum=0;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        for (int i = 0; i < s.size(); i++)
        {
            if (count[s[i] - 'A'] == 0)
            {
                sum += 2;
                count[s[i] - 'A']++;
            }
            else
                sum += 1;
        }
            cout << sum << endl;
            sum = 0;
            
    }

    return 0;
}