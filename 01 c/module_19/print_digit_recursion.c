#include<stdio.h>
void digit(int n){
    //base case
    if(n==0)return;
    int x = n%10;
    digit(n/10);
    printf("%d ", x);
}
int main() {
int test;
scanf("%d", &test);
for (int t = 0; t < test; t++)
{
    int n;
    scanf("%d", &n);
    digit(n);
    //if input 0
    if(n==0){
        printf("0");
    }
    printf("\n");
}

return 0;
}