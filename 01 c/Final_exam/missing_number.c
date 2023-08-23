#include<stdio.h>

int main() {
int n;
scanf("%d", &n);
int t, a, b, c;


int res;
for (int i = 0; i <n; i++)
{
    scanf("%d %d %d %d", &t, &a, &b, &c);
    int sum=a+b+c;
    res = t-sum;
    printf("%d\n", res);
}

  


return 0;
}