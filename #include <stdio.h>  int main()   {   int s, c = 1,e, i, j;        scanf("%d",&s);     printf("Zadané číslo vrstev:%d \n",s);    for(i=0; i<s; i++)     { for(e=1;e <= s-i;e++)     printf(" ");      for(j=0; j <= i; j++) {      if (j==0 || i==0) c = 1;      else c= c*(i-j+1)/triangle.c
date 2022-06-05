#include <stdio.h>
 int main() 
 {
  int s, c = 1,e, i, j; 
   
  scanf("%d",&s);
    printf("Zadané číslo vrstev:%d \n",s);
   for(i=0; i<s; i++) 
   { for(e=1;e <= s-i;e++)
    printf(" "); 
    for(j=0; j <= i; j++) { 
    if (j==0 || i==0) c = 1;
     else c= c*(i-j+1)/j; 
     printf("%4d", c);
      } 
      printf("\n");
       } 
       printf ("     _______________");
       return 0;
        }
