#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	char str[100];
	int i;
	int count = 0;
	
	printf("Enter Sentence Krizyyyuuhhhh: ");
	gets(str);
	
	for(i = 0; i < strlen(str); i++)
	{
		if(isupper(str[i]))
		{
			count++;
		}
	}
	
	printf("%d", count);
}
