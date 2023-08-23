#include<stdio.h>
void world(){
    printf("World Funnction start\n");
    printf("World Funnction end\n");
}
void hello(){
    printf("Hello Function start\n");
    world();
    printf("Hello function End\n");
}
int main() {
printf("Main Function Start\n");
hello();
printf("Main Function End\n");
return 0;
}