#include <stdio.h>

int main (void)
{
	int i, N, num;
	
	scanf("%d",&N);
	
	for(i=0;i<N;i++){
		scanf("%d",&num);
		
   				if (num % 400 == 0) {
      			printf("LEAP\n", num);
  				 }
   			
   				else if (num % 100 == 0) {
      			printf("NO LEAP\n", num);
   				}
  				 
  				 else if (num % 4 == 0) {
      			printf("LEAP\n", num);
  				 }
   				
   				else {
      			printf("NO LEAP\n", num);
   				}
	}
	return 0;
}





		
