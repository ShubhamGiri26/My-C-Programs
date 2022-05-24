#include<stdio.h>

int main(){
    int s;
    printf("Enter the number of elements:");
    scanf("%d",&s);
    printf("Enter the array elements :");
    int a[s];
    for(int i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<s;i++)         
    {
        int small;
        for(int j=i+1; j<s ;j++)
        {
            if(a[i]<a[j])
            {
                small=a[i];
                a[i]=a[j];
                a[j]=small;
            }
        }
    }
    printf("The second smallest element is %d",a[s-2]);   //Accessing the smallest element
    printf("\n");
    printf("The second largest element is %d",a[1]);
    return 0;
}