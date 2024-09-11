#include <stdio.h>

int main (void)
{
	int i,n,j;
	int array[50];
	int first = 0;
	
	
	
	scanf("%d", &n);
	
	
	for(i=0; i<n;i++)
	{
		scanf("%d", &array[j]);
		
		if(array[j] != 3)
		{
			first += array[j];
		}
	
		
	}
		printf("%d", first);
	
	return 0;
}


