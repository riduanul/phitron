#include<stdio.h>
//even=?
//odd=?
// divisabl with 3 and 5?;

int main() {
int n;
scanf("%d", &n);
int ar[n];
for (int i = 0; i < n; i++)
{
        scanf("%d", &ar[i]);
}
int even=0, odd=0, div=0;
for (int i = 0; i < n; i++)
{
    if(ar[i] % 2 ==0){
        even++;
    }
    if(ar[i] % 2 != 0){
        odd++;
    }
    if(ar[i] % 3 == 0 && ar[i] % 5 == 0 ){
        div++;
    }
}

printf("Even = %d\nOdd =%d\nDiv=%d", even, odd, div);



return 0;
}