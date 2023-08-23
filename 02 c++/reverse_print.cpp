#include<bits/stdc++.h>
using namespace std;

class Students 
{
    public:
    string name;
    int cls;
    char section;
    int math_marks;
    int eng_marks;
    
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
            cin>>obj[i].name>>obj[i].cls>>obj[i].section>>obj[i].math_marks>>obj[i].eng_marks;
        }

           
        
        
            
    } 
    for (int i = t-1; i >=0; --i)        {
            cout<<obj[i].name<<" "<<obj[i].cls<<" "<<obj[i].section<<" "<<obj[i].math_marks<<" "<<obj[i].eng_marks<<endl;
        }
    return 0;
}