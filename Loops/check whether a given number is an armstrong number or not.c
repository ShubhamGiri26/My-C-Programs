#include <stdio.h>
#include <math.h>

int main()
{
    int orgNum, num, lastDigit, digits, sum;

    printf("Enter any number to check Armstrong number: ");
    scanf("%d", &num);

    sum = 0;

    orgNum = num;

    digits = (int) log10(num) + 1;

    while(num > 0)
    {
    
        lastDigit = num % 10;

        sum = sum + round(pow(lastDigit, digits));

           num = num / 10;
    }

    if(orgNum == sum)
    {
        printf("%d is ARMSTRONG NUMBER", orgNum);
    }
    else
    {
        printf("%d is NOT ARMSTRONG NUMBER", orgNum);
    }

    return 0;
}
