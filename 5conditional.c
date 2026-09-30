#include <stdio.h>

int main()

{

float amount, discount, finalBill;

printf("Enter purchase amount: ");

scanf("%f", &amount);

discount = (amount > 1000) ? amount * 0.10 : 0;

finalBill = amount - discount;

printf("Discount = %.2f\n", discount);

printf("Final Bill = %.2f\n", finalBill);

return 0;

}