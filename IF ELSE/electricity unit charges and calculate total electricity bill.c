#include <stdio.h>
int main()
{
    int unit;
      printf("Enter total units consumed: ");
      scanf("%d",&unit);
      if(unit<=100){
          
            printf("Bill amount is: ");
    printf("%d",unit*5);
}
else if(unit<=200){
    
     printf("Bill amount is: ");
    printf("%d",(100*5)+(unit-100)*7);
}
else if(unit<=300){
    
    printf("Bill amount is: ");
    printf("%d",(100*5)+(100*7)+(unit-200)*10);
}
else{
    printf("Bill amount is: ");
    printf("%d",(100*5)+(100*7)+(100*10)+(unit-300)*15);
   
}

    return 0;
}
