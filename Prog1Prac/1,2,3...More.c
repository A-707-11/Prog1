#include <stdio.h> 

int main(void) 
{ 
    int n;
	int r;
	int rev = 0;
	 
    
    printf("Enter n: ");
    scanf("%d", &n); 
     
    while (n > 0) { 
         r= n % 10; 
        if (r > 3) {
            rev = rev * 10 + r; 
        }
        n = n / 10; 
    } 
    if (rev == 0) {
        printf("none");
    } else {
        while (rev> 0) { 
             r = rev % 10; 
            printf("%d\n", r); 
            rev= rev/ 10; 
        } 
    }
    return 0; 
}
