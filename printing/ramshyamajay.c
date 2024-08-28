#include<stdio.h>

int main(){
    int x, y, z;

    
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    
    if(x < y && x < z){
        printf("\nRam is the youngest");
    }
    else if(y < z && y < x){
        printf("\nShyam is the youngest");
    }
    else{
        printf("\nAjay is the youngest");
    }

    return 0;
}
