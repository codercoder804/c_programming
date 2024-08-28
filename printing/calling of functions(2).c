#include <stdio.h>

void sum(int x, int y) {
    printf("\nThe sum of the two numbers is %d\n", x + y);
}

void sub(int x, int y) {
    printf("\nThe difference of the two numbers is %d\n", x - y);
}

void prod(int x, int y) {
    printf("\nThe product of the two numbers is %d\n", x * y);
}

void div(int x, int y) {
    printf("\nThe division of the two numbers is %d\n", x / y);
}

int main() {
    int x, y;
    printf("\nEnter number 1: ");
    scanf("%d", &x);
    printf("\nEnter number 2: ");
    scanf("%d", &y);
    sum(x,y);
    sub(x,y);
    prod(x,y);
    div(x,y);

    return 0;
}
