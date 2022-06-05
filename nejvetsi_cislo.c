#include <stdio.h>

int main() {
int a,b,c;
printf("\n zadej 3 čísla\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b && c<a)
printf("\n a je větší než b a c");
if(b>a && c<b)
printf("\n b je větší než a a c");
if(c>a && b<c)
printf("\n c je větší než a a b");
    return 0;
}
