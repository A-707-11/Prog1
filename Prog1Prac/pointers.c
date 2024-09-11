#include <stdio.h>
#include <string.h>

int main () {

   int  var1;
   int  *pointer;
   int var2;
   
   var1 = 43;
   
   var2 = var1;
   var2 = 23;
   printf("Value of var1: %d\n",var1);	
   printf("Value of var2: %d\n",var2);	
   
   pointer = &var1;
   *pointer = 23;
   
   printf("Address of var1 variable: %x\n", &var1);
   printf("Address of pointer variable: %x\n", pointer);
   printf("Address of var2 variable: %x\n", &var2);
   
   printf("Value of var1: %d\n",var1);
   printf("Value of pointer: %d\n",*pointer);	

   return 0;
}

