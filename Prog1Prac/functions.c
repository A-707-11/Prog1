#include <stdio.h>

void double_value(int *num){
    *num = *num * 2;
}

int main(void)
{
	int a=5;

	double_value(&a);
	
	printf("%d\n",a);

}

