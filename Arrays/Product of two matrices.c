#include <stdio.h>
int main()
{
     int a[3][3],b[3][3],m[3][3],i,j,k;
     printf("Enter Elements for First 3*3 Matrix:\n\n");
     for(i=0;i<=2;i++)
          for(j=0;j<=2;j++)
          {
               scanf("%d",&a[i][j]);
          }
          printf("\nFirst Matrix :\n\n");
     for(i=0;i<=2;i++)
     {
          for(j=0;j<=2;j++)
          {
               printf("%d ",a[i][j]);
          }
          printf("\n");
     }
     printf("\nEnter Elements for Second 3*3 Matrix: \n\n");
     for(i=0;i<=2;i++)
          for(j=0;j<=2;j++)
          {
               scanf("%d",&b[i][j]);
          }
     printf("\nSecond Matrix :\n\n");
     for(i=0;i<=2;i++)
     {
          for(j=0;j<=2;j++)
          {
               printf("%d ",b[i][j]);
          }
          printf("\n");
     }
     for(i=0;i<=2;i++)
     {
          for(j=0;j<=2;j++)
          {
               m[i][j]=0;
               for(k=0;k<=2;k++)
                    m[i][j]=m[i][j]+a[i][k]*b[k][j];;
          }
     }
     printf("\nProduct of Matrices:\n\n");
     for(i=0;i<=2;i++)
     {
          for(j=0;j<=2;j++)
          {
               printf("%d ",m[i][j]);
          }
          printf("\n");
     }
     return 0;
}