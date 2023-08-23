#include<stdio.h>

int main() {
int value = 100;
int *pntValue = &value;
// value = 200;
*pntValue = 300;
printf("value er value-%d\n", *pntValue);
printf("value er value-%d\n", value);

return 0;
}