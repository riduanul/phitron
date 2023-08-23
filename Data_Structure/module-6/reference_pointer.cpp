#include <bits/stdc++.h>
using namespace std;
void fun(int *&ptr)
{
    cout << &ptr << endl;
}
int main()
{
    int val = 10;
    int *ptr = &val;
    fun(ptr);
    cout << &ptr;
    return 0;
}