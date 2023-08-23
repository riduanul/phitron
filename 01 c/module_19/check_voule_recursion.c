#include<stdio.h>
int voule(char c[], int i){
// base case
if(c[i] == '\0') return 0;

int sum = voule(c,i+1);
if(c[i] >= 'A' && c[i] <= 'Z' ){
    c[i] = c[i] + 32;
}
if(c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u'){
 return    sum + 1; 
}else{
    return sum;
}
}
int main() {
char c[202];
fgets(c, 202, stdin);
int res = voule(c, 0);
printf("%d", res);
return 0;
}