#include <stdio.h>

main () 
{
    int count, lines, n;
    
    printf("numbers of lines = ");
    scanf("%d", &n);
    printf("\n");
    
    for (lines = 1; lines <= n; lines++) {
        for (count = 1; count <= n - lines ; count++)
        putchar(' ');
        
        for (count = 1; count <= 2 * lines - 1; count++)
        putchar('*');
        
        printf("\n");
    }
}
