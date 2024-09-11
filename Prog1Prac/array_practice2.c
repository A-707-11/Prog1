#include <stdio.h>

int main(void) {
    double nums[10] = {1.4, 1.2054, 2.2, 2.5, 3.66, 3.0, 4.024, 4.00001, 5.5, 5.10};
    int i;
      for (i = 9; i >= 0; i--) {     
        printf("%.2f ", nums[i]);     
    } 
	     
    return 0;
}

/*
Traverse through the one-dimensional array starting 
from the last element going to the first element. 
Print out each element with a newline at 
a 2-digit decimal number precision.

An array containing 10 predefined double values are
already provided in the code editor. 
*/
