#include <cs50.h>
#include <stdio.h>

int get_size(void);
void print_grid(int height);

int main(void)
{
    int height = get_size();
    print_grid(height);
}

// prompt for positive integer between 1 and 8 "Height: "
// re-prompt if invalid input (< 1 or > 8 or not int)
int get_size(void)
{
    int size;
    do
    {
        size = get_int("Height: ");
    }
    while (size < 1 || size > 8);
    return size;
}

// iterate from 1 to input int
// set i to 1
// each iteration:
// print size - i "space"
// print i "#"
// print "  "
// print i "#"
// print "\n"
// add 1 to i
void print_grid(int size)
{
    for (int i = 1; i <= size; i++)
    {
        for (int space = (size - i); space > 0; space--)
        {
            printf(" ");
        }
        for (int block = (size - i); block < size; block++)
        {
            printf("#");
        }
        printf("  ");
        for (int block = (size - i); block < size; block++)
        {
            printf("#");
        }
        printf("\n");
    }
}
