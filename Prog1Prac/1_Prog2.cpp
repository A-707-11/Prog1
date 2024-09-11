#include <stdio.h>
#include <stdlib.h>

int *inputData();
void displayArray(int arr[],int size);
int determine(int arr[],int count, int x);
int findSmallest(int arr[],int size);
void exchange(int *x,int *y);

int main()
{
	
	int *arr, n, i;
	
	/*Task 1*/
	arr = inputData();
	displayArray(arr+1,arr[0]);
	
	/*Task 2*/
	printf("\nFind if n is present: ");
	scanf("%d", &n);
	determine(arr+1,arr[0],n);
	
	/*Task 3*/
	findSmallest(arr+1,arr[0]);
	free(arr);
	
	return 0;
	 
}

int *inputData()
{

	int i;
	int n;
	
	printf("Input an array: ");
	scanf("%d", &n);

	
	int *arr=(int*)malloc(n*sizeof(int));
	
	arr[0]=n;
	
	for(i=1;i<=n;i++)
	{
		scanf("%d", &arr[i]);
	}
	
	return arr;
	
	
}

void displayArray(int arr[], int size)
{
	
	int i;
	
	printf("Elements: ");
	
	for(i=0;i<size;i++)
	{
		printf("%d", arr[i]);
		
		if(i!=size-1)
		{
			printf(",");
		}
		
	}
	
}

int determine(int arr[],int size,int x)
{
	int i;
	
	for(i=0;i<size;i++)
	{
		if(arr[i]==x)
		{
			printf("Present");
			break;
		}	
	}
	
	if(i==size)
	{
		printf("Not Present");
	}
	
}

int findSmallest(int arr[],int size)
{
	int i ;

	int small = arr[0]; 
	
	
	for(i=0;i<size;i++){
		if(arr[i]<small){
			small=arr[i];
		}		
	}
	
	printf("\nThe smallest element is %d", small);
	exchange(arr+1, &small);
	
}

void exchange(int *x,int *y)
{
	int temp;
	
	temp = *x;
	*x = *y;
	*y = temp;
	
}
