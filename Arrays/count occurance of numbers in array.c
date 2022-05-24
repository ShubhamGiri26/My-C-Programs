#include<stdio.h>
int main()
{
     int n,i,j,k,a[10],t,num;
     printf("/*How Many Numbers You Want\nTo Add in Array*/\n\nEnter Limit : ");
     scanf("%d",&n);
     printf("\nEnter %d Numbers:\n\n",n);
     for(i=0;i<n;i++)
          scanf("%d",&a[i]);
     for(i=0;i<n;i++)
     {
          for(j=i+1;j<n;j++)
          {
               if(a[i]>a[j])
               {
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
               }
          }
     }
     printf("\n--------------------------------\n");
     printf(" Number\t Frequency of Occurrence\n");
     printf("\n--------------------------------\n");
     for(i=0;i<n;i=j)
     {
          num=a[i];
          k=1;
          for(j=i+1;j<n;j++)
          {
               if(a[j]!=num)
                    break;
               else
                    k++;
          }
          printf("\n%d\t\t%d",num,k);
     }
     return 0;
}

