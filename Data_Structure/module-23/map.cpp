#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;
    mp.insert({"sakib al hasan", 75});
    mp.insert({"Tamim Iqbal", 90});
    mp.insert({"shamim", 9});

    cout << mp["shamim"];

    return 0;
}