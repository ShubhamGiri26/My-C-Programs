#include <stdio.h>
#include <math.h>

int sum(int a, int b);
int main() 
{
    int result = sum(2,3);
  
    printf("sum= %d", result);
    
}

int sum(int a, int b){
    return a+b;
}
