#include<stdio.h>
#include<limits.h>


int main()
{
 int a[3];
 for (int i = 0; i <3; i++)
 {
    scanf("%d", &a[i]);
 }
 int arr[3];
for (int i = 0; i < 3; i++)
{
    arr[i] = a[i];
    
}


for (int i = 0; i <2; i++)
{
    for (int j = 1; j <=3; j++)
    {
        if(a[i] > a[j] ){
            int b = a[i];
            a[i] = a[j];
            a[j] = b;
        }
    }
      
}
for (int i = 0; i < 3; i++)
{
     printf("%d\n", a[i]); 
}
printf("\n");
for (int i = 0; i < 3; i++)
{
    printf("%d\n", arr[i]);
}


 
    
    return 0;
}