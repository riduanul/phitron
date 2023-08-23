#include<stdio.h>
int sum(){
    int a, b;
    scanf("%d %d", &a, &b);
    int result = a + b;
    return result;
}

int main() {
int result = sum();
printf("%d", result);
return 0;
}