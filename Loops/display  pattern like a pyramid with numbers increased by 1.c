#include <stdio.h>
void main()
{
   int i,j,sg,rows,k,t=1;
   
   printf("Input number of rows : ");
   scanf("%d",&rows);
   
   sg=rows+4-1;
   
   for(i=1;i<=rows;i++)
   {
         for(k=sg;k>=1;k--)
            {
              printf(" ");
            }
	   for(j=1;j<=i;j++)
	   
	   printf("%d ",t++);
	printf("\n");
    sg--;
   }
}
