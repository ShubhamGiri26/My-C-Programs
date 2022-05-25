#include<stdio.h>

int main()
{
   float inchesHeight, centiHeight;
   printf("Enter Person Height in inches =");
   scanf("%f", &inchesHeight);
   
   centiHeight = inchesHeight * 2.54;
   printf("Height of Person in Centimeters =%.2f", centiHeight);
   return 0;
}
