# WEEK 3: C - Variables, if, else, while
**Requirements**
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project
- There should be no errors and no warnings during compilation
- You are not allowed to use `system`
- Your code should use the `Betty` style. It will be checked using `betty-style.pl` and `betty-doc.pl`

## FILE: 0-positive_or_negative.c
**0. Positive anything is better than negative nothing**\
This program will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print whether the number stored in the variable `n` is positive or negative.
- You can find the source code [here](https://github.com/hs-hq/0x01.c/blob/main/0-positive_or_negative_c)
- The variable `n` will store a different value every time you will run this program
- You don’t have to understand what `rand`, `srand`, `RAND_MAX` do. Please do not touch this code
- The output of the program should be:
	- The number, followed by
		- if the number is greater than 0: `is positive`
		- if the number is 0: `is zero`
		- if the number is less than 0: `is negative`
	- followed by a new line

## FILE: 1-last_digit.c
**1. The last digit**\
This program will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable `n`.
- You can find the source code [here](https://github.com/hs-hq/0x01.c/blob/main/1-last_digit_c)
- The variable `n` will store a different value every time you run this program
- You don’t have to understand what `rand`, `srand`, and `RAND_MAX` do. Please do not touch this code
- The output of the program should be:
	- The string `Last digit of`, followed by
	- `n`, followed by
	- the string `is`, followed by
		- if the last digit of `n` is greater than 5: the string `and is greater than 5`
		- if the last digit of `n` is 0: the string `and is 0`
		- if the last digit of `n` is less than 6 and not 0: the string `and is less than 6 and not 0`
	- followed by a new line

## FILE: 2-print_alphabet.c
**2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game**\
Write a program that prints the alphabet in lowercase, followed by a new line.
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` twice in your code

## FILE: 3-print_alphabets.c
**3. alphABET**\
Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` three times in your code

## FILE: 4-print_alphabt.c
**4. When I was having that alphabet soup, I never thought that it would pay off**\
Write a program that prints the alphabet in lowercase, followed by a new line.
- Print all the letters except `q` and `e`
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` twice in your code

## FILE: 5-print_numbers.c
**5. Numbers**\
Write a program that prints all single digit numbers of base 10 starting from `0`, followed by a new line.
- All your code should be in the `main` function

## FILE: 6-print_numberz.c
**6. Numberz**\
Write a program that prints all single digit numbers of base 10 starting from `0`, followed by a new line.
- You are not allowed to use any variable of type `char`
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- You can only use `putchar` twice in your code
- All your code should be in the `main` function

## FILE: 7-print_tebahpla.c
**7. Smile in the mirror**\
Write a program that prints the lowercase alphabet in reverse, followed by a new line.
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` twice in your code

## FILE: 8-print_base16.c
**8. Hexadecimal**\
Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` three times in your code

## FILE: 9-print_comb.c
**9. Patience, persistence and perspiration make an unbeatable combination for success**\
Write a program that prints all possible combinations of single-digit numbers.
- Numbers must be separated by `,`, followed by a space
- Numbers should be printed in ascending order
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the `main` function
- You can only use `putchar` four times maximum in your code
- You are not allowed to use any variable of type `char`
