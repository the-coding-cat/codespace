#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("Pyramid of blocks hieght: ");
    while (n < 1)
    {
        int n = get_int("Pyramid of blocks hieght: ");
    }
    for (i = 0; i < n; i++)
    {
        printf("#");
    }
    printf(" \n");
}
