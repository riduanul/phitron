#include<stdio.h>

int main() {
int amount;
scanf("%d", &amount);

if(amount >5000 && amount<20000){
    printf("Levis Bag");
}
else if(amount==20000){
    printf("gucci bag");
    
}
else if(amount>20000){
        printf("Gucci bag\n Gucci Belt");
}
else{
    printf("something");
}
return 0;
}