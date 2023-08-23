#include<stdio.h>
int sum(){
    printf(10+10);
}
int main() {
int x=10;
printf("%p\n", &x);
int * p = &x;
printf("%p\n", p);
//dereference
printf("%d\n", *p);
*p = 100;
printf("%d\n", x);
sum();
return 0;
}