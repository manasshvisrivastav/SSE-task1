#include <stdio.h>

int main()

{

int num;

printf("Enter a number: ");

scanf("%d", &num);

if (num >= 10 && num <= 50)

{

printf("The number lies between 10 and 50.");

}

else

{

printf("The number does not lie between 10 and 50.");

}

return 0;

}