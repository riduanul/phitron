#include<bits/stdc++.h>
using namespace std;

class Students 
{
    public:
    string name;
    int cls;
    char section;
    int id;
    
};

int main()
{
    int t;
    cin>>t;

    Students obj[t];
    
    for (int i = 0; i < t; i++)
    {
        for (int i = 0; i < t; i++)
        {
            cin>>obj[i].name>>obj[i].cls>>obj[i].section>>obj[i].id;
        }

   }
   int j=t-1;
   for (int i = 0; i < j; i++)
   {
   
        int temp = obj[i].id;
        obj[i].id= obj[j].id;
        obj[j].id= temp;
        j--;
    
    
   }
   
    
    for (int i = 0; i <t; i++)        {
            cout<<obj[i].name<<" "<<obj[i].cls<<" "<<obj[i].section<<" "<<obj[i].id<<endl;
        }
    return 0;
}