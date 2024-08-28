#include <stdio.h>
int main() {
    
    int a[100]={55,-9,20,-25,-65,75,-80,91,-31};
    int i,n=9;
    for(i=0;i<n;i++)
    {     
        if(a[i]>0)
        {
            printf("\n%d ",a[i]);
        }
        

    }
    return 0;
}