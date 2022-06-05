#include <stdlib.h>
#include <stdio.h>
#include <time.h>
const int WIDTH = 5;
const int HEIGHT = 3;
const int MINE_COUNT = 10;
int main()
{
    int pole[WIDTH][HEIGHT];
    // inicializace
    for (int y = 0; y < HEIGHT; y++)
    {
        for (int x = 0; x < WIDTH; x++)
        {
            pole[x][y] = 0;
        }
    }
    int mx, my;
    srand(time(NULL));
    for (int i = 0; i < MINE_COUNT; i++)
    {
        do
        {
            mx = rand() % WIDTH;
            my = rand() % HEIGHT;
        } while (pole[mx][my] == 9);
        pole[mx][my] = 9;
    }
    // print
    for (int y = 0; y < HEIGHT; y++)
    {
        for (int x = 0; x < WIDTH; x++)
        {
            if (pole[x][y] == 9)
            {
                printf("*");
            }
            else
            {
                printf("%d", pole[x][y]);
            }
        }
        printf("\n");
    }
    return 0;
}
