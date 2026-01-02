#include <stdio.h>

int main()
{
    int x = 5;

    printf("Initial value of x = %d\n", x);

    printf("Using pre-increment (++x): %d\n", ++x);
    printf("Value of x after pre-increment = %d\n", x);

    x = 5;  // Reset value

    printf("Using post-increment (x++): %d\n", x++);
    printf("Value of x after post-increment = %d\n", x);

    return 0;
}
