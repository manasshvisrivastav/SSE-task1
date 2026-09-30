#include <stdio.h>

int main()

{

int num, first, second, third, sum;

printf("Enter a three-digit number: ");

scanf("%d", &num);

first = num / 100;

second = (num / 10) % 10;

third = num % 10;

sum = first + second + third;

printf("Sum of digits = %d", sum);

return 0;

}