#include <stdio.h>

int main() {
int n,row,col;
printf ("Enter the n\n");
scanf ("%d",&n);
for (row=1;row<n;row++)
{
    for (col=1;col<n;col++)
    {
if (col+row==n || col==n-1 || col==1 || row== 1 || row==n-1)
{
    printf ("*");
}
else 
{
    printf (" ");
}
    }
    printf ("\n");
}
    return 0;
}
