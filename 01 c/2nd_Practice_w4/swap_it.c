#include<stdio.h>
int swap_it(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    
    
}
int main() {
int a = 40, b=50;
swap_it(&a, &b);
printf("%d %d", a, b);
return 0;
}