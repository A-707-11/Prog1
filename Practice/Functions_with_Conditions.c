#include <stdio.h>

int a(){
	printf ("Hello\n");
	return 1;	
}

int b(){
	printf ("Students\n"); 
	return 1;	
}

int c(){
	printf("Good Bye\n");
	return 0;	
}

int main(void)
{
	if ((a() || b()) && c()){
		printf ("You Won!\n");	
	}
	
	return 0;	
}
