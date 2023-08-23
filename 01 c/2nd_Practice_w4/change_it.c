#include<stdio.h>
int change_it(int a[], int n){
   a[n-1] = 100; 
   for (int i = 0; i < n; i++)
   {
        
        printf("%d ", a[i]);
   }
   
    
}
int main() {

int a[5] = {1, 5, 4, 10, 2};
change_it(a, 5);

return 0;
}