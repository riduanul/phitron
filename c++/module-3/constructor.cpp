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
    Student rahim(29, 10, 'A', "Rahim Ullah");
    Student karim(35, 14, 'A', "Karim saheb");
    cout<<karim.name;
    return 0;
}