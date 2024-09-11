#include <stdio.h>
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
   
   	int N, num, i, j, k;
	
	scanf("%d",&N);
	
	for(i=0;i<N;i++)
	{
			
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
}
