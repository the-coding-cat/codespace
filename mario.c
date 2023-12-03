#include <stdio.h>
#include <cs50.h>

int main(void)
{
    do
    {
        int n = get_int("Height: ");
    }
    while(n < 1 || n > 8);

    for(int i = n; i < 1, i--)
    {
        printf("#")
    }
}