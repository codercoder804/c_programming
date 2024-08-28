#include <stdio.h>

void sum() {
    int x, y;
    printf("\nEnter number 1: ");
    scanf("%d", &x);
    printf("\nEnter number 2: ");
    scanf("%d", &y);
    printf("\nThe sum of the two numbers is %d\n", x + y);
}

void sub() {
    int x, y;
    printf("\nEnter number 1: ");
    scanf("%d", &x);
    printf("\nEnter number 2: ");
    scanf("%d", &y);
    printf("\nThe difference of the two numbers is %d\n", x - y);
}

void prod() {
    int x, y;
    printf("\nEnter number 1: ");
    scanf("%d", &x);
    printf("\nEnter number 2: ");
    scanf("%d", &y);
    printf("\nThe product of the two numbers is %d\n", x * y);
}

void div() {
    int x, y;
    printf("\nEnter number 1: ");
    scanf("%d", &x);
    printf("\nEnter number 2: ");
    scanf("%d", &y);
    printf("\nThe division of the two numbers is %d\n", x / y);
    
}

int main() {
    sum();
    sub();
    prod();
    div();

    return 0;
}
