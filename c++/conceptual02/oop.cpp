// functional programming;
// Object Oriented Programming;

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
 Person * ARahim = new Person("ARahim", 5.2,33 );
 Person * AKarim = new Person("AKarim", 6.0,30 );
   if(ARahim->age > AKarim->age){
    cout<<ARahim->name<<endl; 
   }else{
    cout<<ARahim->name<<endl; 
   }
   
   
    return 0;
}