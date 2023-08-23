#include<stdio.h>

int main() {
int n;
scanf("%d", &n);

int firstNumber = n/10;
printf("%d\n", firstNumber);
int secondNumber = n%10;
printf("%d\n", secondNumber);
if(firstNumber % secondNumber == 0){
    printf("YES\n");
}else{
    printf("NO\n");
}

return 0;
}