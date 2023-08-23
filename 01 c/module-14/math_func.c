#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main() {
int x;
scanf("%d", &x);

// int ans = ceil(x);
// int ans = floor(x);
// int ans = round(x);
// int ans = sqrt(x);
// int ans = pow(x,y);
int ans = abs(x);
printf("%d", ans);
return 0;
}