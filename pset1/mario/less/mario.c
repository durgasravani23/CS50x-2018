//This is mario - less program
#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int height, i, j, space, base = 2;

    do
    {
        height = get_int("Height:");
    }
    while (height < 0 || height > 23);

    int h = height + 1;

    for (base = 2; base <= h; base++) //This loop is to check the height of the pyramid.
    {
        space = h - base;
        for (i = 0; i < space; i++) //This loop is to print spaces required in each row.
        {
            printf(" ");
        }
        for (j = 0; j < base; j ++) //This loop is to print #
        {
            printf("#");
        }
        printf("\n");
    }
}