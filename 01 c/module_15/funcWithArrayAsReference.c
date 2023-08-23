#include<stdio.h>

void func(int *ar, int n){
ar[2] = 500;
for (int i = 0; i < 5; i++)
{
    printf("%d ", ar[i]);
}

printf("\n");
}

int main() {
  const int ary[4] = {1, 2, 3, 4};
        int *p;
        p = ary + 3;
        *p = 5;
        printf("%d\n", ary[3]);


return 0;
}