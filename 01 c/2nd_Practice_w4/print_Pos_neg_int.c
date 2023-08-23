#include<stdio.h>
int num_abs(int n){
//    if(n < 0){
//     n = n * -1;
//    } 
int num = abs(n);
   printf("%d", num);
}
int main() {
num_abs(-10);
return 0;
}