#include<stdio.h>
int x = 500;//Global scope
void func(void){
    printf(" x from func- %d\n", x);
 int s=100; //functional scope
//  printf("Func er s er address %p\n", &s);
}
int main() {
int s= 200;
// printf("Main er s er address- %p\n", &s);
printf(" x from main- %d\n", x);
func();
return 0;
}