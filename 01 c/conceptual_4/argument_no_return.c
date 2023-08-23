#include<stdio.h>
void value(int n){
   for (int i = n; i >= -n; i--)
   {
    printf("%d ", i);
   }
   
}

int main() {
    value(5);

return 0;
}