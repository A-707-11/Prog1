#include<stdio.h>

int main()
{
        int a;
        char z [5][5];  
        
        scanf("%d",&a);
       
        int i;
        for(i=0;i<a;i++)
        {
            
            scanf("%s",&z[i]);
        }
       
        for(i=0;i<a;i++)
        {                
            
			printf("%04s\n",z[i]);
        }
       

}
