#include <stdio.h>

int main(void) 
{
  int i,n,j,k;
  int array[100];
  int max = 10;
  
  printf("Enter the number of players: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) 
  {
    printf("Goals score by player #%d: ", i);
    scanf("%d", &array[j]);
   
	    if ( max < array[j]) 
		{
			max = array[j] ;
		}
    	 
  }  

   	if ( 10 < max) {
	        printf("Not Messi");
	    }
	    else {
	    	printf("Okay, fine, it's Messi");
		}
  

  return 0;
}


