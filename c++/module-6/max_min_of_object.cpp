#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int marks;
};
int main()
{
    Student a[3];
    for (int i = 0; i < 3; i++)
    {
        getline(cin, a[i].name);
        cin>>a[i].roll>>a[i].marks;
        cin.ignore();
    }
    
    Student max;
    max.marks= INT_MIN;
    for (int i = 0; i < 3; i++)
    {
    if(a[i].marks > max.marks){
        max = a[i];
    }
    }
    cout<<max.name<<" "<<max.marks<<endl;
    
    Student mn;
    mn.marks= INT_MAX;
    for (int i = 0; i < 3; i++)
    {
    if(a[i].marks < mn.marks){
        mn= a[i];
    }
    }
    cout<<mn.name<<" "<<mn.marks;
    
    return 0;
}