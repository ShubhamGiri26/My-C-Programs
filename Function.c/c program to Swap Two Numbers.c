#include<stdio.h>
int main() 
{
    
  double first, second, swap;
 
  printf("Enter first number: ");
  scanf("%lf", &first);
 
  printf("Enter second number: ");
  scanf("%lf", &second);


  swap = first;

  
  first = second;

  second = swap;

  printf("\nAfter swapping, first number = %f\n", first);
  printf("After swapping, second number = %f", second);
  return 0;
}
