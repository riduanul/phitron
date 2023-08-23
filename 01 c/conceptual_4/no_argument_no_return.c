#include<stdio.h>

int main() {
int n;
scanf("%d", &n);
int k;
scanf("%d", &k);
int a[4];
for (int i = 1; i <=3; i++)
{
    scanf("%d", &a[i]);
}

for (int i = 1; i <=n; i++)
{
   
        if(a[k]==0){
            printf("NO\n");
            return;
        }
        k = a[k];
         if(a[k]==0){
            printf("NO\n");
            return;
        }
        
        printf("YES\n");
    
    
    
}


return 0;
}