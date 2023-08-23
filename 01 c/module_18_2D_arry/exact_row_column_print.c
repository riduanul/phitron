#include<stdio.h>

int main() {
int row, col;
scanf("%d %d", &row, &col);

int a[5][3];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);

        }
    
        
    }
    //exact row
//   int er =2;
//   for (int i = 0; i < col; i++)
//   {
//     printf("%d ", a[er][i]);
//   }

//exact column
// int ec = 1;
// for (size_t i = 0; i < row; i++)
// {
//     printf("%d\n", a[i][ec]);    
// }

  
    
return 0;
}