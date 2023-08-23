#include<stdio.h>


int count_zero(int *a[], int n){
  int count = 0;
 
  for(int i = 0; i<n; i++){
    if(a[i]== 0){
     
      break;
    }
    else{
        count++;
    }
  }
  return count;
}
int main() {


int a[5]={1,2,0,3,0};


int count = count_zero(a, 5);
printf("\n%d", count);

return 0;
}