#include<stdio.h>
void sqaure(int x){
printf("\nTHE SQAURE OF THE GIVEN NUMBER %d",x*x);
}
void cube(int x){
printf("\nTHE CUBE OF THE GIVEN NUMBER %d",x*x*x);
}
int main() {
    int x;
    printf("\nEnter number: ");
    scanf("%d", &x);
    sqaure(x);
    cube(x);
}