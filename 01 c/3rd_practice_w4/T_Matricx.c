#include<stdio.h>
#include<stdlib.h>

int main() {
int n;
scanf("%d",&n);
int arr[n][n];
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        scanf("%d", &arr[i][j]);
    }
    
}


int sum_of_primary=0;
int sum_of_secondary=0;

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        if(i==j){
            
            sum_of_primary += arr[i][j];
        }
        
        if(i+j == n-1){
            
            sum_of_secondary += arr[i][j];
        }
        
        
    }
    
}
int sum= sum_of_primary + -sum_of_secondary;
int abs_res = abs(sum);

printf("%d",abs_res );


return 0;
}