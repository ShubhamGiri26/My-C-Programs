#include <stdio.h>
int main()
{
     int a[5],i,j,k;
     printf("Enter 5 Numbers:\n");
     for(i=0;i<5;i++)
          scanf("%d",&a[i]);
     for(i=0;i<6;i++)
          for(j=i+1;j<7;j++)
               if(a[i]<a[j])
               {
                    k=a[i];
                    a[i]=a[j];
                    a[j]=k;
               }
     printf("\nNumbers in Descending Order:\n");
     for(i=0;i<7;i++)
          printf("%d ",a[i]);
     return 0;
}