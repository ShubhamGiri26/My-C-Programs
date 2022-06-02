#include <stdio.h>

void perfect_number(int x, int y)

{

int i = 0, sum = 0;

while(x <= y)

{

sum = 0;

for(i=1;i<x; i++){

if(x % i == 0)

{

sum += i;

}

}

if( sum == x) {

printf("Perfect num %d \n", x);

}

x++;

}

}

int main()

{

int i, j;

printf("Enter low number: ");

scanf("%d", &i);

printf("Enter high number: ");

scanf("%d", &j);

perfect_number(i, j);

return 0;

}
