#include <stdio.h>

int main() {

   int number;
   printf("zadej libovolné číslo:\n");
   scanf("%d",&number);
   if(number<100)
   {
    printf("Číslo je menší než 100\n\n");
   }
   else
   {
    printf("Číslo je větší než 100:");
   }
    return 0;
   }
