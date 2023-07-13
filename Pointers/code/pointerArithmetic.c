#include <stdio.h>

int main()
{
    int x = 5;
    int *ptr = &x;

    ptr++;

    printf("The value of the pointer is: %d\n", *ptr);

    ptr--;

    printf("The value of the pointer is: %d\n", *ptr);

    ptr += 5;

    printf("The value of the pointer is: %d\n", *ptr);

    ptr -= 5;

    printf("The value of the pointer is: %d\n", *ptr);

    return 0;
}
