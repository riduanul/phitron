#include<stdio.h>

int main() {
int n;
scanf("%d", &n);

int tiger=0, pathan=0, draw=0;
int a, b;

for (int i = 1; i <= n; i++)
{
    {
    scanf("%d %d", &a, &b);
    
    }

if(a > b){
    tiger++;
}else if (b > a){
    pathan++;
}else{
    draw++;
}


}

if(tiger==pathan){
    printf("Draw\n");
}
else if(tiger<pathan){
printf("Pathan\n");
}else if(tiger>pathan){
    printf("Tiger\n");
}


return 0;
}