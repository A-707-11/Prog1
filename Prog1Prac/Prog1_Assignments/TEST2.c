#include <stdio.h>

#define MAX_SCORES 10

void chooseChoice(int *n);
void displayArray(int a[], int size);
void inputScore(int a[], int size);
float average(int a[], int size);
int min (int a[], int size);
int retrieve(int pos, int a[], int size);
int retrieve_last(int a[], int size);
int retrieve_first(int a[]);
int search(int X, int a[], int size);

int main () {
	
	int scores[MAX_SCORES];
	int i, user_choice, position, value;
	
	for (i=0; i<MAX_SCORES; scores[i] = 0, i++) {}
	printf("\t  !!! All values have been initialized to -1 !!!\n\n");
	chooseChoice(&user_choice);
	
	while (user_choice != 0) 
	{
		switch (user_choice) {
			case 1: //Display Scores
				displayArray(scores, MAX_SCORES);
				inputScore(scores, MAX_SCORES);
				printf("\nNEW SCORES: \n"); displayArray(scores, MAX_SCORES);
				break;
			case 2: //Input Scores
				inputScore(scores, MAX_SCORES);
				printf("\nNEW SCORES: \n"); displayArray(scores, MAX_SCORES);
				break;
			case 3: //Average
				printf("The total average of the array is: %.2f\n\n", average(scores, MAX_SCORES));
				break;
			case 4: //Minimum
				printf("The minimum score found in the array is: %d\n\n", min(scores, MAX_SCORES));
				break;
			case 5:
			{
				int j;
				do
				{
					printf("\nSelect Index: ");
					scanf("%d", &position);
					j = retrieve(position, scores, MAX_SCORES);		
					if (j == -1)
					{
						printf("Invalid index. Please enter a valid index.\n");
					}
					else
					{
						printf("Element at %d is: %d\n", position, retrieve(position, scores, MAX_SCORES));
					}
				} while(j == -1);
			}
			chooseChoice(&user_choice);
			break;
				
				break;
			case 6: //Retrieve first (index value)
				printf("The first score is: %d\n", retrieve_first(scores));
				break;
			case 7: //Search for value
				printf("Enter the value to search for: "); scanf("%d", &value);
				((search(value, scores, MAX_SCORES)) == -1) ? printf("The score does not exist or the score is -1\n") : printf("%d is in the score list\n", search(value, scores, MAX_SCORES));
				break;
			case 8: //Retrieve last (index value)
				printf("The last score is: %d\n", retrieve_last(scores, MAX_SCORES));				
				break;
			default:
				printf("Invalid choice!");
				break;
		}
		printf("\n");
		chooseChoice(&user_choice);
	} 
	return 0;
}

void chooseChoice(int *n)
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

void displayArray(int a[], int size)
{
	int i;
	
	printf("\n");
	for(i = 0; i < size; i++)
	{
		printf("array[%d]: %d\n", i, a[i]);
	}
	printf("\n");
}

void inputScore(int a[], int size)
{
	int i;
	
	printf("\nInput 10 scores \n\n");
	for(i = 0; i < size; i++)
	{
		printf("array[%d]: ", i);
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
