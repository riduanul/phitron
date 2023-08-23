#include<stdio.h>

int main() {
int row, col;
scanf("%d %d", &row, &col);

int a[row][col];
int elm = row*col;
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
        scanf("%d", &a[i][j]);
    }

    
}
int count =0;
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
        if(a[i][j]==0){
            count++;
        }
    }

    
}
if(elm==count){
    printf("Zero Matrix\n");
}else{
    printf("Not Zero matrix\n");
}
return 0;
}