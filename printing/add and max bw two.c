#include<stdio.h>

void sum(int x,int y){
   printf("\nTHE SUM OF TWO VALUES IS %d",x+y);
}

void max(int x, int y){
    if(x>y){
        printf("\nNUMBER 1 IS GREATER THAN NUMBER 2");
    }
    else if(x<y){
        printf("\nNUMBER 1 IS LESS THAN NUMBER 2");
    }
    else{
        
        printf("\nNUMBER 1 IS EQUAL TO NUMBER 2");
    }
    }
    int main() {
    int x, y;
    printf("\nEnter number 1: ");
    scanf("%d", &x);
    printf("\nEnter number 2: ");
    scanf("%d", &y);
    sum(x,y);
    max(x,y);

}
