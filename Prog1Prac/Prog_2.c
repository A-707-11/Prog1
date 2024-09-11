#include<stdio.h>
#include<stdlib.h>

int * inputData();
void displayData(int*, int);
void findElem(int*, int, int);
void findSmallest(int*, int);
void exchange(int*,int*);

int main(){
	
	int *arr, size, find;
	printf("Task 1\n");
	arr = inputData();
	
	displayData(arr+1, arr[0]);
	
	printf("\nTask 2\n");
	
	printf("Enter the number to find: ");
	scanf("%d", &find);
	findElem(arr+1, arr[0], find);
	
	printf("\nEnter the number to find: ");
	scanf("%d", &find);
	findElem(arr+1, arr[0], find);
	
	printf("\nTask 3\n");
	
	displayData(arr+1, arr[0]);
}

int* inputData(){
	
	int *x, N, i;
	
	printf("How many numbers: ");
	scanf("%d", &N);
	
	x = (int*)malloc((N+1)*sizeof(int));
	
	if(x!=NULL){
		
		x[0] = N;
		
		printf("Enter %d numbers: \n", N);
	
		for(i=1;i<=N;i++){
			scanf("%d", &x[i]);
		}
	
		return x;
	
	}
	
}

void displayData(int*a, int b){
	
	int i;
	printf("\nElements of the array: ");
	for(i=0; i<b; i++){
		printf("%d,", a[i]);
	}
	
}

void findElem(int*x, int y, int z){
	
	int i, counter=0;
	
	for(i=0;i<y;i++){
		if(x[i]==z){
			counter++;
		}
	}	
	
	if(counter!=0){
		printf("Number Found!");
	}else{
		printf("number not Found");
	}
		
}

void findSmallest(int*a, int b){
	
	int i ,small = a[0], k;
	
	for(i=0;i<b;i++){
		if(a[i]<small){
			small=a[i];
			k= i;
		}		
	}
	exchange(a+1, &k);
	
	
}

void exchange(int*x,int*y){
	
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	
	
}

