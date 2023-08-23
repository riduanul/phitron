#include<stdio.h>

void func(){
    printf("fun\n");
    func();
}
int main() {
func();
return 0;
}