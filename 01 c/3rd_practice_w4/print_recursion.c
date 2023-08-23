#include<stdio.h>

void recursion(int n){
    if(n == 0) return;
    printf("I love Recursion\n");
    recursion(n-1);
}
int main (){
    recursion(3);
    return 0;
}