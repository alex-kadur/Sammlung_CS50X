#include <cs50.h>
#include <stdio.h>
#include <string.h>

void print_bulb(int bit);

int main(void)
{
    // TODO
    // get user input
    string message = get_string("Message: ");

    // get lenght total
    int length = strlen(message);
    // loop; for each character:
    for (int i = 0; i < length; i++)
    {
        // convert ASCII character to corresponding decimal
        int decimal = message[i];
        int binary_8[8] = {0, 0, 0, 0, 0, 0, 0, 0};
        // convert decimal to 8-bit binary number
        // loop, for each bit (backwards):
        for (int j = 7; j >= 0; j--)
        {
            if (decimal > 0)
            {
                // if: modulo 2 is 0: set bit to 0
                // else: set bit to 1
                // devide decimal by 2
                int bit = decimal % 2;
                if (bit == 1)
                {
                    decimal--;
                }
                decimal /= 2;
                binary_8[j] = bit;
            }
        }
        // print 8-bit binary number as bulbs; use print_bulb
        for (int k = 0; k < 8; k++)
        {
            print_bulb(binary_8[k]);
        }
        printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
