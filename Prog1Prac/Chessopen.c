#include<stdio.h>

int main(void)
{
	 int n, digit; 
  
    printf("Enter n: "); 
    scanf("%d", &n); 
  
    while (n > 0) 
	{ 
        digit = n % 10;   
        if (digit > 3) 
            printf("%d\n", digit); 
        n /= 10; 
    } 
	 for (j = i; j > -1; j--) 
		  { 
				printf("%d\n", arr[j]);
				
		  }
	 
	 if (n == 0)
	  printf("none");
 
 return 0;
}
