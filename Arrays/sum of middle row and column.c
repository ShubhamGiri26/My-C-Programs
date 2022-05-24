#include<stdio.h>
int main(){
      int a[3][3],e,f,g,s1=0,s2=0;
     printf("Enter Elements for Matrix of Size 3*3:\n\n");
     for(e=0;e<=2;e++)
          for(f=0;f<=2;f++)
          {
               scanf("%d",&a[e][f]);
          }
     printf("\nMatrix is:\n\n");
     for(e=0;e<=2;e++)
     {
          for(f=0;f<=2;f++)
          {
               printf("%d ",a[e][f]);
          }
          printf("\n");
     }
     printf("Middle Row Elements/n: ");
     for(g=0;g<=2;g++)
     {
          s1=s1+a[1][g];
          printf("%d ",a[1][g]);
     }
     printf("\nSum of Middle Row Elements : %d\n",s1);
     printf("\nMiddle Column Elements : ");
     for(g=0;g<=2;g++)
     {
          s2=s2+a[g][1];
          printf("%d ",a[g][1]);
     }
     printf("\nSum of Middle Column Elements : %d\n",s2);
    if(s1==s2)
          printf("Sum is EQUAL/n");
     else
          printf("Sum is NOT EQUAL/n");
     return 0;
}

