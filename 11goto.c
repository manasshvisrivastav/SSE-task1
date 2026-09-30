#include <stdio.h>
int main(){

char op;

input:

printf("Enter operator (+, -, *, /): ");

scanf(" %c", &op);

switch(op){

case '+':

printf("Addition");

break;

case '-':

printf("Subtraction");

break;

case '*':

printf("Multiplication");

break;

case '/':

printf("Division");

break;

default:

printf("Invalid operator!\n");

goto input;

}

return 0;