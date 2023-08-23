#include<stdio.h>
int char_to_ascii (char x){
    char value;
    if(x >= 'a' && x<="z"){
       value = x-32;
    } else{
        value = x+32;
    }
    return value;
}

int main() {
char schii = char_to_ascii('A');
printf("%c", schii);

return 0;
}