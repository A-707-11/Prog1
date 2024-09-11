#include <stdio.h>

int main(void) 
{
	float num;
	int pos;
	int multiply;
	int dec;

	
		
	printf("Enter the number: ");
	scanf("%f", &num);
	
	printf("Enter the decimal position: ");
	scanf("%d", &pos);
	
	if(pos == 1)
	{
		
		multiply = num * 10;
		dec	= multiply % 10;
		
	} 
	else if(pos == 2)
	{
		
		multiply = num * 100;
		dec	= multiply % 10;
		
	}
	else if(pos == 3)
	{
		
		multiply = num * 1000;
		dec	= multiply % 10;
		
	}
	else if(pos == 4)
	{
		
		multiply = num * 10000;
		dec	= multiply % 10;
		
	}
    
	printf("Decimal value at decimal position = %d", dec);
		
	

	
	return 0;
}
