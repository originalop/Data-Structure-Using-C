#include <stdio.h>

int main()
{
    int i = 10;
    int *j = &i;
    printf("i value: %d\n", i);
    printf("*j value: %d\n", *j); // Its called 'Deferencing'.
    return 0;
}