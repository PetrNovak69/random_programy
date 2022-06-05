#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {

    int count, luckyNumber, num;
    srand(time(NULL));
    
    scanf("%d", &num);

    printf("Tvoje čísla jsou:\n\n");

    for(count = 0; count < num; count++){
        číslo = (rand()%100)+1;
        printf("%d ", luckyNumber);

    }
    return 0;
}
