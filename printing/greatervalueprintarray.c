#include <stdio.h>

int main() 
{
    int a[100] = {55, 9, 20, 25, 65, 75, 80, 91, 31};
    int i, n = 9, c1 = 0, find;

    printf("\nEnter find greater value => ");
    scanf("%d", &find);

    for (i = 0; i < n; i++) 
    {
        if (a[i] > find) 
        {
            printf("\n%d", a[i]);
            c1++; 
        }
    }

    printf("\nCount => %d", c1);

    return 0;
}
