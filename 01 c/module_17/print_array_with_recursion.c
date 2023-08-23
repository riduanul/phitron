#include<stdio.h>
void arr_recursion(int *arr[], int n, int i){
    if(i==n)return;
    printf("%d\n", arr[i]);
    arr_recursion(arr, n, i+1);
}
int main() {
int arr[3]= {10, 20, 30};
arr_recursion(arr, 3, 0);
return 0;
}