#include <stdio.h>

#define MAX_SCORES 10

int retrieve(int pos, int a[], int size);

int main()
{
	int array[MAX_SCORES] = {2,-1,-1,-1,-1,-1,-1,-1,-1,-1};
	int pos;
	
	do
	{
		printf("\nSelect Index: ");
		scanf("%d", &pos);
		retrieve(pos, array, MAX_SCORES);
		if (retrieve(pos, array, MAX_SCORES) == -1)
		{
			printf("Error: score at index %d is still equal to -1!\n");
		}
		else
		{
			printf("Index of element %d is: %d\n", pos, retrieve(pos, array, MAX_SCORES));	
		}		
	} while(retrieve(pos, array, MAX_SCORES) == -1);  	
}

int retrieve(int pos, int a[], int size)
{
	if (pos < 0 || pos > size)
	{
		return -1;
	}
	else
	{
		return a[pos];
	}
}
