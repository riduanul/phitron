#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    int mx=INT_MIN, mn=INT_MAX;
    mn = min(mn, a);
    mn = min(mn, b);
    mn = min(mn, c);
    mx = max(mx, a);
    mx = max(mx, b);
    mx = max(mx, c);
    cout<<mn<<" "<<mx;


    
    
    return 0;
}