#include<stdio.h>

int main() {
int n;
scanf("%d", &n);

int star=n-1;
int hash= 1;
for (int i = 0; i < n; i++)
{
    if(i!=n/2){
        for (int j = 1; j <= star/2; j++)
    {
       printf("*");
    }
    for (int j = 1; j <= hash; j++)
    {
       printf("#");
    }
    for (int j = 1; j <= star/2; j++)
    {
       printf("*");
    }
    }
    if(i==n/2){
        for (int j = 1; j <= star/2; j++)
    {
       printf("#");
    }
    for (int j = 1; j <= hash; j++)
    {
       printf("#");
    }
    for (int j = 1; j <= star/2; j++)
    {
       printf("#");
    } 
    }

    printf("\n");
    
}

return 0;
}