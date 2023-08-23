#include<stdio.h>
int dbl(int x, int y){
    int t = x * y;
    return t;
}
int main() {

int result = dbl(1500, 3);
printf("%d", result);
return 0;
}