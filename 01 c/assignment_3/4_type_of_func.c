#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//Has Return + Parameter
int sum(int a, int b){
    return a+b;
}
//Has Return + No Parameter
int get_rendom_number(){
    return rand();
}
//No Return + Parameter
int swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b=temp;
}
//No Return + No Parameter
void greatings(){
    printf("Hello! Welcometo Phitron Batch-3");
}


int main() {

int res = sum(2,3);
printf("Has Return + Parameter: %d\n",res );

int random_number= get_rendom_number();
printf("Has Return + No parameter: %d\n", random_number);

int a=10, b=20;
swap(&a,&b);
printf("No Return + Parameter: %d %d\n", a, b);

//No Return + No Parameters
greatings();
return 0;
}