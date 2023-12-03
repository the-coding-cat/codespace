#include <stdio.h>
#include <cs50.h>

int main(void)
{
    do
    {
        n = get_int("Height: ");
    }
    while(n < 1 || n > 8);
}