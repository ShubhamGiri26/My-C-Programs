#include <stdio.h>

 int main ()
{
  
int costprice, sellprice, result;
  
 
printf ("Enter cost price : \n");
  
scanf ("%d", &costprice);
  
 
printf ("Enter selling price : \n");
  
scanf ("%d", &sellprice);
  
 
result = sellprice - costprice;
  
 
if (result > 0)
    {
      
printf ("Profit : %d\n", result);
    
}
  else
    {
      
printf ("Loss : %d\n", -result);
    
}
  
 
 
return 0;

}

