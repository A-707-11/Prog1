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


int transform2(char *str1)  
{  
    int i, len, temp;  
    len = strlen(str1); 
      
   
    for (i = 0; i < len/2; i++)  
    {  
        
        temp = str1[i];  
        str1[i] = str1[len - i - 1];  
        str1[len - i - 1] = temp;  
    }  
}  
      
    int main()  
    {  
        char str[50]; 
        int lowercase;
        int uppercase;
		int sum; 
        

        printf ("Enter a string: ");  
        scanf ("%[^\n]%*c", str);
        
        lowercase = (str[0] == 'a' || str[0] == 'e' || str[0] == 'i' || str[0] == 'o' || str[0] == 'u');
        uppercase = (str[0] == 'A' || str[0] == 'E' || str[0] == 'I' ||str[0] == 'O' || str[0] == 'U');
        
        if(lowercase || uppercase){
        	transform2(str);
        	printf("%s", str);
		}  else {
			printf("%d", transform1(str, 0)); 
		}
        
       
    }  
