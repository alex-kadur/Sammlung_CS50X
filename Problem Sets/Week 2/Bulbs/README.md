# Bulbs

---

## Implementation Details

Design and implement a program, `bulbs`, that converts text into instructions for the strip of bulbs on CS50’s stage as follows:

- Implement your program in a file called `bulbs.c`.
- Your program must first ask the user for a message using `get_string`.
- Your program must then convert the given `string` into a series of 8-bit binary numbers, one for each character of the string.
- You can use the provided `print_bulb` function to print a series of `0`s and `1`s as a series of yellow and black emoji, which represent on and off light bulbs.
- Each “byte” of 8 symbols should be printed on its own line when outputted; there should be a `\n` after the last “byte” of 8 symbols as well.

[...]

Here’s an example of how the completed program might work. [...]

```
# ./bulbs
Message: HI!
⚫🟡⚫⚫🟡⚫⚫⚫
⚫🟡⚫⚫🟡⚫⚫🟡
⚫⚫🟡⚫⚫⚫⚫🟡
```

---

