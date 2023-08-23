#include<stdio.h>

int main() {
int n;
scanf("%d", &n);

int space = n-1;
int number = 1;
for (int i = 1; i <= (n*2)-1; i++)
{
    for (int j = 1; j <=space; j++)
    {
        printf(" ");
    }
    for (int j = 1; j <=number; j++)
    {
        printf("%d", j);
    }
    
   if(i<=n-1){
     space--;
    number=number+2;
   }else{
    space++;
    number= number-2;
   }
    printf("\n");
    
}

return 0;
}