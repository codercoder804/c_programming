#include <stdio.h>

int main() 
{
    int a[100] = {55, 9, 20, 25, 65, 75, 80, 91, 31, 50, 50, 50};
    int i, n = 12, c1 = 0, find;

    printf("\nEnter the value to find => ");
    scanf("%d", &find);

    for (i = 0; i < n; i++) 
    {
        if (a[i] == find) 
        {
            c1++; 
        }
        else{
            printf("\nTHE GIVEN VALUE IS NOT IN THE ARRAY");
        }
        
    }
    
    printf("\nNUMBER OF TIMES SAME VALUE OCCURS IN THE ARRAY => %d", c1);

    return 0;
}
