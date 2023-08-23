#include<stdio.h>
int count_odd(int a[], int n){
    int oddCount=0;
   for (int i = 0; i < n; i++)
   {
     if(a[i] % 2 != 0 ){
        oddCount++;
    }
   }
   
    return oddCount;
}
int main() {
int n = 5;
int a[] = {1, 5, 4, 10, 2};
int result = count_odd(a, n);
printf("%d", result);
return 0;
}