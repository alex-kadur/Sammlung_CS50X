#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    // TODO
    // prompt user for a number of cents using get_int
    // return input number as an int
    // if user input is a negative int, prompt again
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);
    return cents;
}

int calculate_quarters(int cents)
{
    // TODO
    // calculate how many quarters a customer should be given
    // return number of quarters as an int
    int quarters = (cents - (cents % 25)) / 25;
    return quarters;
}

int calculate_dimes(int cents)
{
    // TODO
    // calculate how many dimes a customer should be given
    // return number of dimes as an int
    int dimes = (cents - (cents % 10)) / 10;
    return dimes;
}

int calculate_nickels(int cents)
{
    // TODO
    // calculate how many nickels a customer should be given
    // return number of nickels as an int
    int nickels = (cents - (cents % 5)) / 5;
    return nickels;
}

int calculate_pennies(int cents)
{
    // TODO
    // calculate how many pennies a customer should be given
    // return number of pennies as an int
    int pennies = (cents - (cents % 1)) / 1;
    return pennies;
}
