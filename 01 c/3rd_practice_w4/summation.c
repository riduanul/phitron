#include<stdio.h>
int sum_recursion(int arr[], int n, int i){
 if(i==n)return;
 long long int sum=0;
 sum= sum+arr[i];
 printf("%lld", sum);
 sum_recursion(arr, n, i+1);
    
}
int main() {
int n;
scanf("%d", &n);
int arr[n];
for (int i = 0; i < n; i++)
{
    scanf("%d", &arr[i]);
}
sum_recursion(arr, n, 0);
return 0;
}