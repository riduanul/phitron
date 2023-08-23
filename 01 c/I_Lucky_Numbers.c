#include <stdio.h>

int main()

{
    int n;
    scanf("%d", &n);
    int a, b;
    a = n % 10;
    b = n / 10;
    if (a % b == 0)
    {
        printf("YES");
    }
    else if (a == 0 && a % b == 0)
    {
        printf("YES");
    }

    else
    {
        printf("NO");
    }

    return 0;
}