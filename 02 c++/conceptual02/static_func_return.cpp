#include<bits/stdc++.h>
using namespace std;

class Person
{
        public:
        char name[10];
        float height;
        int age;
    Person(char* n, float h, int ag){
        strcpy(name, n);
        height = h;
        age = ag;
        
    }

};//framework / chach / model
int main()
{
 Person Arahim("Arahim", 5.6, 33);
 cout<<Arahim.name;  
   
    return 0;
}