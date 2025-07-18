# WEEK 4: C - More functions, more nested loops

**Requirements**
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
- You are allowed to use `_putchar`
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don’t forget to push your header file

## FILE: 0-isupper.c
**0. isupper**\
Write a function that checks for uppercase character.
- Prototype: `int _isupper(int c);`
- Returns `1` if `c` is uppercase
- Returns `0` otherwise

FYI: The standard library provides a similar function: `isupper`. Run `man isupper` to learn more.

## FILE: 1-isdigit.c
**1. isdigit**\
Write a function that checks for a digit (`0` through `9`).
- Prototype: `int _isdigit(int c);`
- Returns `1` if `c` is a digit
- Returns `0` otherwise

## FILE: 2-mul.c
**2. Collaboration is multiplication**\
Write a function that multiplies two integers.
- Prototype: `int mul(int a, int b);`

## FILE: 3-print_numbers.c
**3. The numbers speak for themselves**\
Write a function that prints the numbers, from `0` to `9`, followed by a new line.
- Prototype: `void print_numbers(void);`
- You can only use `_putchar` twice in your code

## FILE: 4-print_most_numbers.c
**4. I believe in numbers and signs**\
Write a function that prints the numbers, from `0` to `9`, followed by a new line.
- Prototype: `void print_most_numbers(void);`
- Do not print `2` and `4`
- You can only use `_putchar` twice in your code

## FILE: 5-more_numbers.c
**5. Numbers constitute the only universal language**\
Write a function that prints 10 times the numbers, from `0` to `14`, followed by a new line.
- Prototype: `void more_numbers(void);`
- You can only use `_putchar` three times in your code

## FILE: 6-print_line.c
**6. The shortest distance between two points is a straight line**\
Write a function that draws a straight line in the terminal.
- Prototype: `void print_line(int n);`
- You can only use `_putchar` function to print
- Where `n` is the number of times the character `_` should be printed
- The line should end with a `\n`
- If `n` is `0` or less, the function should only print `\n`

## FILE: 7-print_diagonal.c
**7. I feel like I am diagonally parked in a parallel universe**\
Write a function that draws a diagonal line on the terminal.
- Prototype: `void print_diagonal(int n);`
- You can only use `_putchar` function to print
- Where `n` is the number of times the character `\` should be printed
- The diagonal should end with a `\n`
- If `n` is `0` or less, the function should only print a `\n`

## FILE: 8-print_square.c
**8. You are so much sunshine in every square inch**\
Write a function that prints a square, followed by a new line.
- Prototype: `void print_square(int size);`
- You can only use `_putchar` function to print
- Where `size` is the size of the square
- If `size` is `0` or less, the function should print only a new line
- Use the character `#` to print the square

## FILE: 9-fizz_buzz.c
**9. Fizz-Buzz**\
The “Fizz-Buzz test” is an interview question designed to help filter out the 99.5% of programming job candidates who can’t seem to program their way out of a wet paper bag.

Write a program that prints the numbers from `1` to `100`, followed by a new line. But for multiples of three print `Fizz` instead of the number and for the multiples of five print `Buzz`. For numbers which are multiples of both three and five print `FizzBuzz`.
- Each number or word should be separated by a space
- You are allowed to use the standard library

## FILE: 10-print_triangle.c
**10. Triangles**\
Write a function that prints a triangle, followed by a new line.
- Prototype: `void print_triangle(int size);`
- You can only use `_putchar` function to print
- Where `size` is the size of the triangle
- If `size` is `0` or less, the function should print only a new line
- Use the character `#` to print the triangle

