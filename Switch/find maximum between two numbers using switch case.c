
#include <stdio.h>

void main() {
  
    int m, n;
  
    printf("\nEnter the first number\n");
    scanf("\n%d", &m);
  
    printf("\nEnter the second number\n");
    scanf("\n%d", &n);

    switch (m > n) 
    { 
      case 0:
        printf("\nThe greater number is %d\n", n);
        break;
        
      case 1:
        printf("\nThe greater number is %d\n", m);
        break;
        
      default:
        printf("\nBoth number's are same\n");
    }
}
