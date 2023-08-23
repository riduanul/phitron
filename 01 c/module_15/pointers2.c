#include<stdio.h>

int main() {
double x =5.26;

double * ptr = &x;

printf("x er value - %0.2lf\n", x);
printf("x er address - %p\n", &x);
printf("x er value by ptr - %0.2lf\n", *ptr);
printf("x er address by ptr - %p\n", ptr);
printf("ptr er address by ptr - %p\n", &ptr);
printf("ptr er value by ptr - %p\n", ptr);
printf("ptr er size - %d\n", sizeof(ptr)) ;
return 0;
}