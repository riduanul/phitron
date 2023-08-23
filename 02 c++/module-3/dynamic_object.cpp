#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;

        Student(int r, int c, char s, char* n)
        {
            roll = r;
            cls=c;
            section=s;
            strcpy(name, n);
        }
};

int main()
{
    char name[100]= "Rahim Uddin";
    Student * rahim = new Student(29, 14, 'A',name);
    Student karim(35, 14, 'A', "Karim saheb");
    cout<<karim.name<<endl;
    cout<<(*rahim).name<<endl;
    cout<<(*rahim).roll<<endl;
    cout<<(*rahim).section<<endl;
    cout<<rahim->cls<<endl;
    //shortcut
    //arrow sign
    cout<<sizeof(Student);

    delete rahim;
    return 0;
}