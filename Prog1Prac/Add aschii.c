#include <stdio.h>  
#include <string.h>  

int transform1(char str[], int num)
{
     if (num < strlen(str))
    {
        return (str[num] + transform1(str, num + 1));
    }
 
    return 0;
}

int main()  
    {  
        char str[50]; 
        int sum;
        

         printf("Enter the string : ");
    	scanf ("%[^\n]%*c", str);
        
        
		
		
			printf ("%d", transform1(str, 0)); 
		
		
		
	
    }  
