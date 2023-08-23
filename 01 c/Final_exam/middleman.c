#include<stdio.h>

int main() {
int n;
scanf("%d", &n);

int ar[n];
for (int i = 0; i < n; i++)
{
  scanf("%d", &ar[i]);
}

for (int i = 0; i < n-1; i++)
{
  for (int j = i+1; j <n; j++)
  {
    if(ar[i]>ar[j]){
      int temp = ar[i];
      ar[i]=ar[j];
      ar[j]=temp;
    }
  }
  
}
int middle1, middle2;
if(n%2==0){
  middle1= n/2-1;
  middle2= middle1 +1;
  printf("%d %d", ar[middle1], ar[middle2]);
} else{
    middle1 = (n+1)/2-1;
    printf("%d", ar[middle1]);
}
return 0;
}