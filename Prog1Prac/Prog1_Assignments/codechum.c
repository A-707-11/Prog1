#include <stdio.h>

int main(void)
{
    int n,i,j;
    int k;
    int a[25]; 
    
    scanf("%d",&n);
    
                      
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)         
    {
        
        for(j=i+1; j<n ;j++)
        {
            if(a[i]<a[j])
            {
                k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
        }
    }
    printf("%d",a[n-2]);  
    
    return 0;
}


