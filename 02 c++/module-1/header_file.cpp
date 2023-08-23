#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            //middle value
            if(i == (n+1)/2 && j==(n+1)/2){
                printf("X");
            }
            //primary diagonal
            else if(i==j ){
                printf("\\");
            }
            // secondery diagonal
            else if(i+j == n+1){
                printf("/");
            }
            //other's value
            else{
                printf("*");
            }
            
        }
        printf("\n");
        
    }
        
    return 0;
}


