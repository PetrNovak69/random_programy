#include <stdio.h>

int main() {
printf("int:%ld\n",sizeof(int));
printf("short:%ld\n",sizeof(short));
printf("char:%ld\n",sizeof(char));
printf("char:%ld\n",sizeof(char[20]));
printf("float:%ld\n",sizeof(float));
printf("double:%ld\n",sizeof(double));
printf("long double:%ld\n",sizeof(long double));
printf("long long int:%ld\n",sizeof(3.75f));
    return 0;
}
