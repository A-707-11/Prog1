#include<stdio.h>  
#include<math.h>  
  
int main()  
{  
    int i, a, limit, prime, b;  
  
    printf("Enter a number: ");  
    scanf("%d", &limit);  
  
    for(i = 2; i <= limit; i++)  
    {  
        prime = 1;  
        b  = sqrt(i);  
        for(a = 2; a <= b; a++)  
        {  
            if(i % a == 0)  
            {  
                prime = 0;  
                break;  
            }  
        }  
  
        if(prime)  
            printf("%d\n", i);  
    }  
  
    return 0;  
}  
