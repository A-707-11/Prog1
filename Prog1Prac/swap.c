#include <stdio.h>

void swap(int *num1, int *num2)
{
	int n;
	 n = *num1;
	 *num1 = *num2;
	 *num2 = n;
	

	
	return;
}

int main(void)
{
	int a,b;
	
	a = 25;
	b = 89;

	swap(&a,&b);

	printf("%d %d", a, b);
}
