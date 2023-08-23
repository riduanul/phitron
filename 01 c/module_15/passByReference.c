#include<stdio.h>
void func (int *p)
{
printf("p er value- %p\n", p);
printf("p er address- %p\n", &p);
printf("x er value before update from func- %d\n", *p);
*p=50;
printf("x er value from func after update- %d\n", *p);
}
int main() {
int x = 10;

printf("x er address from main - %p\n", &x);
printf("x er value from main before update- %d\n", x);
func(&x);
printf("x er value from main after update- %d\n", x);
return 0;
}