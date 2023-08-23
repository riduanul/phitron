#include<stdio.h>

int main() {
int n;
scanf("%d", &n);
int space=n-1;
int star=1;

for (int i = 0; i < n; i++)
{
    for (int j = 1; j <=space; j++)
    {
      printf(" ");  
    }
    for (int j = 1; j <=star; j++)
    {
        if(i%2==0){
            printf("^");
        }else{
            printf("*");
        }
    }
    printf("\n");
    space--;
    star= star+2;
    
}

return 0;
}