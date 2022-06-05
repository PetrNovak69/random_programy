#include <stdio.h>

int main() {

    int a=5;
    float b = 6.5;
    char c='A';
    double d=3.3;
    void *p;
    p=&c;
    printf("%d",*(char*)p);
    return 0;
}
