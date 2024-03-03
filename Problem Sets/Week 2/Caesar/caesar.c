#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool digits_only(string k);
string shift_message(string message, int k);

int main(int argc, string argv[])
{
    // if (not one argument): print error: return 1
    if (argc != 2)
    {
        printf("Exactly one argument required.");
        return 1;
    }
    string a = argv[1];
    // for each character in argv[1]:
    if (digits_only(a) == false)
    {
        printf("Usage: ./caesar key");
        return 1;
    }
    // convert argv[1] to int
    int k = atoi(a);
    // prompt user for message
    string message = get_string("plaintext:  ");
    // shift message
    string shifted_message = shift_message(message, k);
    // print shifted message
    printf("ciphertext: %s", shifted_message);
    printf("\n");
    return 0;
}

string shift_message(string message, int k)
{
    // for each character in message:
    int length = strlen(message);
    for (int i = 0; i < length; i++)
    {
        // if (isalpha false): keep character; continue
        if (isalpha(message[i]) == false)
        {
            continue;
        }
        // else: shift character
        // if (isupper true): new = ((old - 65) + k) % 26) + 65
        if (isupper(message[i]))
        {
            message[i] = (((message[i] - 65) + k) % 26) + 65;
            continue;
        }
        // else: ((old - 97) + k) % 26) + 97
        message[i] = (((message[i] - 97) + k) % 26) + 97;
    }
    return message;
}

bool digits_only(string a)
{
    // for each character in argument:
    int length_a = strlen(a);
    for (int i = 0; i < length_a; i++)
    {
        // if (isdigit false): return false
        if (isdigit(a[i]) == false)
        {
            return false;
        }
    }
    return true;
}
