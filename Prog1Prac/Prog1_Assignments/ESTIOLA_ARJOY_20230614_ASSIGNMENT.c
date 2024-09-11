#include <stdio.h>

#define MAX_SCORES 10

void display_menu(int *n);
void display(int a[], int size);
void input(int a[], int size);
float average(int a[], int size);
int min (int a[], int size);
int retrieve(int pos, int a[], int size);
int retrieve_last(int a[], int size);
int retrieve_first(int a[]);
int search(int X, int a[], int size);

int main()
{
	int array[MAX_SCORES];
	int n, i, pos, x;
	
	for (i = 0; i < MAX_SCORES; i++)
	{
		array[i] = -1;
	}
	
	printf("SCORES ARE INITIALIZED TO -1\n");	
	display_menu(&n);
	
	while(n != 0)
	{
		switch (n) 
		{
			case 1:
			display(array,MAX_SCORES);
			break;
			
			case 2:
			input(array,MAX_SCORES);
			break;
			
			case 3:
			printf("\nAverage of all scores: %.2f\n\n", average(array,MAX_SCORES));
			break;
			
			case 4:
			printf("\nMinimum: %d\n\n", min (array,MAX_SCORES));
			break;
			
			case 5:
			printf("\nSelect Index: ");
			scanf("%d", &pos);
			retrieve(pos, array, MAX_SCORES);
			if (retrieve(pos, array, MAX_SCORES) == -1)
			{
				printf("Error: index is invalid or score at index [%d] is still equal to -1!\n\n", pos);
			}
			else
			{
				printf("Element at [%d] is: %d\n\n", pos, retrieve(pos, array, MAX_SCORES));	
			}			
			break;
			
			case 6:
			printf("\nFirst Score: %d\n\n", retrieve_first(array));
			break;
			
			case 7:
			printf("\nSelect Element: ");
			scanf("%d", &x);
			if (search(x, array, MAX_SCORES) == -1)
			{
					printf("Error: Element not Found!\n\n");	
			} 
			else
			{
				printf("Index of element %d: [%d]\n\n", x, search(x, array, MAX_SCORES));
			}
			break;
			
			case 8:
			printf("\nLast Score: %d\n\n", retrieve_last(array,MAX_SCORES));
			break;
			
			default:
			printf("\nSelected Number Invalid!\n\n");
			break;
	    }
		display_menu(&n);
	}
	return 0;
}

void display_menu(int *n)
{
	printf("===============================================\n");
	printf("[1] Display Scores\t [6] Retrieve First\n"
           "[2] Input Scores\t [7] Search\n"
           "[3] Average\t\t [8] Retrieve Last\n"
           "[4] Minimum\t\t [0] Exit Program\n"
           "[5] Retrieve\n");
    printf("===============================================\n");
	printf("Select a number: ");
	scanf("%d", n);
}

void display(int a[], int size)
{
	int i;
	
	printf("\n");
	for(i = 0; i < size; i++)
	{
		printf("score[%d]: %d\n", i, a[i]);
	}
	printf("\n");
}

void input(int a[], int size)
{
	int i;
	
	printf("\nInput 10 scores \n\n");
	for(i = 0; i < size; i++)
	{
		printf("score[%d]: ", i);
		scanf("%d", &a[i]);
	}
	printf("\nScores saved!\n");
}

float average(int a[], int size)
{
	int i; 
	float ave = 0;
	
	for(i = 0; i < size; i++)
	{
		ave += a[i];
	}
	
	return ave/size;
}

int min (int a[], int size)
{
	int i, min = a[0];
	
	for(i = 0; i < size; i++)
	{
		if(a[i] < min)
		{
			min = a[i];
		}
	}
	return min;
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

int retrieve_last(int a[], int size)
{
	return a[size-1];
}

int retrieve_first(int a[])
{
	return a[0];
}

int search(int X, int a[], int size)
{
	int i;
	
	for(i = 0; i < size; i++)
	{
		if (X == a[i])
		{
			return i;
		}
	}
	return -1;
}
