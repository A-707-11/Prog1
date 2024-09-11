#include <stdio.h>

int main(void)
{
	int i=1, n;
	
	scanf("%d", &n);
	
	while(i<=n)
	{
		i++;
		int A, B;
		scanf("%d %d", &A, &B);
		while(A<=B)
		{
			printf("%d\n", A);
			A++;
		}
	}
}
