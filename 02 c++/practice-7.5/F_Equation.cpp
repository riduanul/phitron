#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x, n;
    cin>>x>>n;
    double res=0;
    for (int i = 2; i <= n; i=i+2)
    {
        res += pow(x*1.0, i*1.0);
    }
    cout<<res;

    
    return 0;
}