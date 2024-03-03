# Credit

---

## Luhn’s Algorithm

[...]

According to Luhn’s algorithm, you can determine if a credit card number is (syntactically) valid as follows:

1) Multiply every other digit by 2, starting with the number’s second-to-last digit, and then add those products’ digits together.
2) Add the sum to the sum of the digits that weren’t multiplied by 2.
3) If the total’s last digit is 0 (or, put more formally, if the total modulo 10 is congruent to 0), the number is valid!

[...]

## Implementation Details

In the file called `credit.c` [...], write a program that prompts the user for a credit card number and then reports (via `printf`) whether it is a valid American Express, MasterCard, or Visa card number, per the definitions of each’s format herein. So that we can automate some tests of your code, we ask that your program’s last line of output be `AMEX\n` or `MASTERCARD\n` or `VISA\n` or `INVALID\n`, nothing more, nothing less. For simplicity, you may assume that the user’s input will be entirely numeric (i.e., devoid of hyphens, as might be printed on an actual card) and that it won’t have leading zeroes. But do not assume that the user’s input will fit in an `int`! Best to use `get_long` from CS50’s library to get users’ input. (Why?)

Consider the below representative of how your own program should behave when passed a valid credit card number (sans hyphens).

```
$ ./credit
Number: 4003600000000014
VISA
```

[...]

But it’s up to you to catch inputs that are not credit card numbers (e.g., a phone number), even if numeric:

```
$ ./credit
Number: 6176292929
INVALID
```

Test out your program with a whole bunch of inputs, both valid and invalid. (We certainly will!) Here are a [few card numbers](https://developer.paypal.com/api/nvp-soap/payflow/integration-guide/test-transactions/#standard-test-cards) that PayPal recommends for testing.

If your program behaves incorrectly on some inputs (or doesn’t compile at all), time to debug!

---

This is a shortened version of the task provided by CS50’s Introduction to Computer Science
[(see the original version)](https://cs50.harvard.edu/x/2023/psets/1/credit/).

