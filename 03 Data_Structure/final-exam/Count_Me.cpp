#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin.ignore();
        getline(cin, s);
        string word;
        stringstream ss(s);
        map<string, int> mp;

        int max_num = INT_MIN;
        string max_str = "";
        while (ss >> word)
        {
            mp[word]++;

            if (mp[word] > max_num)
            {
                max_num = mp[word];
                max_str = word;
            }
        }

        cout << max_str << " " << max_num << endl;
    }

    return 0;
}