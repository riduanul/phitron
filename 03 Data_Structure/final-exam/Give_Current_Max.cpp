#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};
class Cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks < b.marks)
        {
            return true;
        }
        else if (a.marks > b.marks)
        {
            return false;
        }
        else
        {
            if (a.roll > b.roll)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
};
int main()
{
    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, Cmp> A;

    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        A.push(obj);
    }

    while (n--)
    {
        cout << A.top().name << " " << A.top().roll << " " << A.top().marks << endl;
        A.pop();
    }
    int q;
    cin >> q;

    while (q--)
    {
        int c;
        cin >> c;
        if (c == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Student obj(name, roll, marks);
            A.push(obj);
            cout << A.top().name << " " << A.top().roll << " " << A.top().marks << endl;
        }
        else if (c == 1)
        {
            if (!A.empty())
            {
                cout << A.top().name << " " << A.top().roll << " " << A.top().marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (c == 2)
        {
            if (!A.empty())
            {
                A.pop();
                if (!A.empty())
                {
                    cout << A.top().name << " " << A.top().roll << " " << A.top().marks << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }
    return 0;
}