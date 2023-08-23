#include<stdio.h>
#include<string.h>

void func(char ar[])
{
int sz= sizeof(ar)/sizeof(char);
printf("%s\n", ar); 
printf("%d", strlen(ar)); 
}
int main() {
char ar[20]="Hello";

func(ar);
return 0;
}