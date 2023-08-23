#include<stdio.h>

void fun(int x){

    x = 100;
    printf("func x er address- %p\n", &x);
    printf("func x er value- %d\n", x);
}
int main() {
int x = 10;
printf("main x er address- %p\n", &x);
printf("main x er value- %d\n", x);
fun(x);


return 0;
}