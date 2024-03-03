# Bulbs

---

## Not-So-Broken Light Bulbs

In lecture, you may have noticed what seemed like a “bug” at the front of the stage, whereby some of the bulbs always seem to be off [...].

Each sequence of bulbs, though, encodes a message in binary, the language computers “speak.” Let’s write a program to make secret messages of your own, perhaps that we could even put on stage!

## Implementation Details

To write our program, we’ll first need to think about bases.

### The Basics

The simplest base is base-1, or *unary*; to write a number, *N*, in base-1, we would simply write *N* consecutive `1`s. So the number `4` in base-1 would be written as `1111`, and the number `12` as `111111111111`. Think of it like counting on your fingers or tallying up a score with marks on a board.

You might see why base-1 isn’t used much nowadays. (The numbers get rather long!) Instead, a common convention is base-10, or *decimal*. In base-10, each *digit* is multiplied by some power of 10, in order to represent larger numbers. For instance, **123** is short for **123 = 1 * 10<sup>2</sup> + 2 * 10<sup>1</sup> + 3 * 10<sup>0</sup>**.

Changing base is as simple as changing the **10** above to a different number. For instance, if you wrote `123` in base-4, the number you’d really be writing is **123 = 1 * 4<sup>2</sup> + 2 * 4<sup>1</sup> + 3 * 4<sup>0</sup>**, which is equal to the decimal number **27**.

Computers, though, use base-2, or *binary*. In binary, writing `123` would be a mistake, since binary numbers can only have `0`s and `1`s. But the process of figuring out exactly what decimal number a binary number stands for is exactly the same. For instance, the number `10101` in base-2 represents 1 * 2<sup>4</sup> + 0 * 2<sup>3</sup> + 1 * 2<sup>2</sup> + 0 * 2<sup>1</sup> + 1 * 2<sup>0</sup>**, which is equal to the decimal number **21**.
