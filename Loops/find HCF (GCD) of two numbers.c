
#include<stdio.h>
void main()
{
    int n1,n2,i,min,gcd;
    printf("Enter two integers: ");
    scanf("%d%d",&n1,&n2);
    min = (n1<n2)?n1:n2;

    for(i=1;i<=min;i++)
    {
      
        if(n1%i==0 && n2%i==0)
        {
            gcd = i;
        }
    }
    printf("G.C.D of %d and %d is %d", n1, n2, gcd);
}
