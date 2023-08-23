#include<stdio.h>
// 2. function with argument and withreturn value.

int extract_sum(int num)
{
    int first_num = num/1000;
    int second_num = num % 10;
    int result = first_num + second_num;
    return result;
}

int main() {

int res = extract_sum(1234);
printf("%d", res);
return 0;

}