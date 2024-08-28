#include <stdio.h>
int main() 
{
    
    int a[100]={55,9,-20,25,-65,75,-80,91,-31};
    int i,n=9,c1=0,c2=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            printf("\n %d is Positive",a[i]);
            c1++;
        }
		else
		{
			printf("\n %d is Positive",a[i]);
			c2++;
		}   
    }
    
    printf("\n Count of Positive=>%d",c1);
    printf("\n Count of Negative=>%d",c2);

}