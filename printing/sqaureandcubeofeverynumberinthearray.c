#include <stdio.h>
int main() 
{
    int a[100]={55,9,20,2,6,5,75,8,11,9,31};
    int i,n=11;
    for(i=0;i<n;i++)
    {
        printf("\n%d === %d ===%d ",a[i],a[i]*a[i],a[i]*a[i]*a[i]);
   	}
    
}