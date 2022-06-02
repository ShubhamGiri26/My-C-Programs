#include <stdio.h>
#include<conio.h>

int sum(int a, int b);
int main() 
{
    int result = sum(2,3);
  
    printf("sum= %d", result);
    getch();
}

int sum(int a, int b){
    return a+b;
}
