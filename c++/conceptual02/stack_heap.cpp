#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=15;
    int a[5] ={1, 2, 3, 4, 5};
    int * arr = new int[5]{10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i] <<endl;
    }
    
 delete[] arr;

 cout<<"After Delete"<<endl;
 for (int i = 0; i < 5; i++)
 {
    cout<<arr[i]<<" ";
 }
 
    return 0;
}