#include<stdio.h>
typedef struct
{
   char *sym;
   int val;
}numeral;
int NUM(numeral *nu, int num)
{
   int i, index;
   for(i = 0; i<15; i++)
   {
      if(nu[i].val <= num)
         index = i;
   }
   
   return index;
}
void Roman(numeral *nu, int num)
{
   int max;
   if(num != 0)
   {
      max = NUM(nu, num);
      printf("%s", nu[max].sym);
      num -= nu[max].val;
      Roman(nu, num);
   }
}
int main()
{
   int number;
   numeral nume[15] = {{"I",1},{"IV",4},{"V",5},{"IX",9}, {"X",10},{"XL",40},{"L",50},{"XC",90},
{"C",100},{"CD",400},{"D",500},{"CM",900},{"M",1000},{"MMMM",4000},{"V'",5000}};
   
   scanf("%d", &number);
   if(number >0 && number <= 5000){
      
      Roman(nume, number);
   }
   else{
      printf("Invalid Input");
   }
   printf("\n");
}








#include <stdio.h>

char roman[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
int decimal[] = {1, 5, 10, 50, 100, 500, 1000};

int main (void)
{
	int N, num, i, j, k;
	
	scanf("%d",&N);
	
	for(i=0;i<N;i++)
	{
		scanf("%d",&num);
		for(i = 6; i > 0; i--)
		{
			if(num >= decimal[i])
			{
				break;
			}
		}
		for(j = 0; j > 7; j--)
		{
			if(num <= decimal[j])
			{
				break;
			}
		}
		k = num;
		while(k != 0)
		{
			k /= 10;
			if(k < 10)
			{
				break;
			}
		}
		if(num<10 && num==4)
		{
			printf("%c%c\n", roman[i], roman[j]);
			num=0;
		}
		else if(num>10 && k==4)
		{
			printf("%c%c\n", roman[i], roman[j]);
			num -= (decimal[j] - decimal[i]);
		}
		else if(num<10 && num==9)
		{
			printf("%c%c\n", roman[i-1], roman[j]);
			num=0;
		}
		else if(num>10 && k==9)
		{
			printf("%c%c\n", roman[i-1], roman[j]);
			num -= (decimal[j] - decimal[i-1]);
		}
		else
		{
			printf("%c\n", roman[i]);
			num -= decimal[i];
		}
		
	}
	
}
