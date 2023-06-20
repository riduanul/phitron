#include <bits/stdc++.h>
using namespace std;

class Students
{
public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
};
bool cmp(Students a, Students b)
{
    if (a.eng_marks + a.math_marks == b.eng_marks + b.math_marks)
        return a.id < b.id;
    return (a.eng_marks + a.math_marks > b.eng_marks + b.math_marks);
}

int main()
{
    int t;
    cin >> t;

    Students obj[t];

    for (int i = 0; i < t; i++)
    {

        cin >> obj[i].name >> obj[i].cls >> obj[i].section >> obj[i].id >> obj[i].math_marks >> obj[i].eng_marks;
    }
    sort(obj, obj + t, cmp);

    for (int i = 0; i < t; i++)
    {
        cout << obj[i].name << " " << obj[i].cls << " " << obj[i].section << " " << obj[i].id << " " << obj[i].math_marks << " " << obj[i].eng_marks << endl;
    }
    return 0;
}