#include <stdio.h>
int main() {
     char op;
     float num1,num2;
     printf ("\n Enter your operation here: ");
     scanf("%f%c%f",&num1,&op,&num2);
     
     switch (op)
     {
         case '+':
         printf ("\nResult: %.2f",num1+num2);
         break;
         case '-':
         printf ("\nResult: %.2f",num1-num2);
         break;
         case '*':
         printf ("\nReslt: %.2f",num1*num2);
         break;
         case '/':
         printf ("\nResult: %.2f",num1/num2);
         break;
         default:
         printf("\n invalid inputs");
     }
