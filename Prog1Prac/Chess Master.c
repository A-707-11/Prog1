#include <stdio.h>
#include <stdlib.h>


int main(void) 
{
    char bishop1[3], bishop2[3];

    printf("Position of the first bishop: ");
    scanf("%s", bishop1);
    printf("Position of the second bishop: ");
    scanf("%s", bishop2);

    if (abs(bishop1[0] - bishop2[0]) == abs(bishop1[1] - bishop2[1])) 
    {
        printf("SUCCESS");
    } 
    else 
    {
        printf("FAILED");
    }

    return 0;
}
