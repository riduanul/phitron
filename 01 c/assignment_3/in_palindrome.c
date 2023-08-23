#include<stdio.h>
#include<string.h>

char is_palindrome(char a[]){
    int flag = 0;
    int len = strlen(a);
    for (int i = 0, j= len-1; i <len/2; i++, j--)
    {
        
            if(a[i] == a[j]){
                flag = 1;
            }else{
                flag = 0;
            }
        
        
        
    }
    if(flag == 1){
        printf("Palindrome");
    } else{
        printf("Not Palindrome");
    }
    
}
int main() {

is_palindrome("abcd");

return 0;
}