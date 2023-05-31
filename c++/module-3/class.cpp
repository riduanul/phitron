#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    int cls;
    char section;

};

int main()
{
    Student s;
    s.cls=9;
    s.roll=1;
    s.section='B';
    char sname[100]="sumon";
    strcpy(s.name, sname);
    cout<<s.roll;
    return 0;
}