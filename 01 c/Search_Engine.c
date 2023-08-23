#include<stdio.h>

int main() {
int t;
scanf("%d", &t);

for (int i = 1; i <= t; i++)
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int j = 0; j < n; j++)
    {
        scanf("%d", &ar[j]);
    }
    
    int f;
    scanf("%d", &f);
    int pos = -1;
    
    for (int j = 0; j < n; j++)
    {
        if(ar[j] == f){
            pos=j+1;
            break;
        }
    }
    if(pos == -1)
    {
        printf("Case %d: Not Found", i);
    }    else{
        printf("Case %d: %d", i, pos);
    }
        printf("\n");
    }

return 0;
}