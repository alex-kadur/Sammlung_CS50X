#include <cs50.h>
#include <stdio.h>

long get_number(void);
int get_length(long number);
int get_digit(long number, int length, int zero_or_one);
int get_sum_even(long number, int length);
int get_sum_odd(long number, int length);
bool validate_checksum(int sum_even, int sum_odd);
string validate_format(int length, int first_digit, int second_digit);

int main(void)
{
    long number = get_number();
    int length = get_length(number);
    int first_digit = get_digit(number, length, 0);
    int second_digit = get_digit(number, length, 1);
    int sum_even = get_sum_even(number, length);
    int sum_odd = get_sum_odd(number, length);
    if (validate_checksum(sum_even, sum_odd) == true)
    {
        string result = validate_format(length, first_digit, second_digit);
        printf("%s\n", result);
    }
    else
    {
        printf("INVALID\n");
    }
}

long get_number(void)
{
    long number;
    do
    {
        number = get_long("Number: ");
    }
    while (number < 0);
    return number;
}

int get_length(long number)
{
    int length = 0;
    for (long i = 1; number >= i; i *= 10)
    {
        length++;
    }
    return length;
}

int get_digit(long number, int length, int zero_or_one)
{
    long divisor = 1;
    int digit_return = 0;
    for (int i = 0; i < (length - zero_or_one); i++)
    {
        int digit = (number / divisor) % 10;
        digit_return = digit;
        divisor *= 10;
    }
    return digit_return;
}

int get_sum_even(long number, int length)
{
    int sum_even = 0;
    long divisor = 10;
    for (int i = 1; i < length; i += 2)
    {
        int digit = ((number / divisor) % 10) * 2;
        if (digit > 9)
        {
            digit = digit - 9;
        }
        sum_even += digit;
        divisor *= 100;
    }
    return sum_even;
}

int get_sum_odd(long number, int length)
{
    int sum_odd = 0;
    long divisor = 1;
    for (int i = 0; i < length; i += 2)
    {
        int digit = (number / divisor) % 10;
        sum_odd += digit;
        divisor *= 100;
    }
    return sum_odd;
}

bool validate_checksum(sum_even, sum_odd)
{
    int valid = (sum_even + sum_odd) % 10;
    if (valid == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

string validate_format(length, first_digit, second_digit)
{
    if (length == 15)
    {
        if (first_digit == 3)
        {
            if (second_digit == 4 || second_digit == 7)
            {
                return "AMEX";
            }
        }
    }
    if (length == 16)
    {
        if (first_digit == 5)
        {
            if (second_digit >= 1 && second_digit <= 5)
            {
                return "MASTERCARD";
            }
        }
    }
    if (length == 13 || length == 16)
    {
        if (first_digit == 4)
        {
            return "VISA";
        }
    }
    return "INVALID";
}
