#include<stdio.h>

// ar[0] = *ar;
// ar[1] = *(ar+1) and *(1+ar);

int main() {
int ar[5]= {10,20,30,40,50};
printf("oth index er address- %p\n", &ar[0]);
printf("oth index er address- %p\n", ar);
printf("oth index er value- %d\n", ar[0]);
printf("oth index er value- %d\n", *ar);
printf("oth index er value- %d\n", ar[1]);
printf("oth index er value- %d\n", *(ar+1));
printf("oth index er value by 1[ar]- %d\n", 1[ar]);
return 0;
}