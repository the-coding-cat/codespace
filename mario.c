#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Enter Height Here: ");
    }
    while (height < 1 || height > 8);

    for(row = 0; row <height; row++)
    {
        printf("\n");
    }
}