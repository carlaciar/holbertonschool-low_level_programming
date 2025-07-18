# WEEK 6: C - malloc, free
**Requirements**
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc` and `free`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
- You are allowed to use `_putchar`
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don’t forget to push your header file

## FILE: 0-create_array.c
**0. Float like a butterfly, sting like a bee**

Write a function that creates an array of chars, and initializes it with a specific char.
- Prototype: `char *create_array(unsigned int size, char c);`
- Returns `NULL` if size = `0`
- Returns a pointer to the array, or `NULL` if it fails

## FILE: 1-strdup.c
**1. The woman who has no imagination has no wings**

Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
- Prototype: `char *_strdup(char *str);`
- The `_strdup()` function returns a pointer to a new string which is a duplicate of the string `str`. Memory for the new string is obtained with `malloc`, and can be freed with `free`.
- Returns `NULL` if str = NULL
- On success, the `_strdup` function returns a pointer to the duplicated string. It returns `NULL` if insufficient memory was available

FYI: The standard library provides a similar function: `strdup`. Run `man strdup` to learn more.

## FILE: 2-str_concat.c
**2. He who is not courageous enough to take risks will accomplish nothing in life**

Write a function that concatenates two strings.
- Prototype: `char *str_concat(char *s1, char *s2);`
- The returned pointer should point to a newly allocated space in memory which contains the contents of `s1`, followed by the contents of `s2`, and null terminated
- if `NULL` is passed, treat it as an empty string
- The function should return `NULL` on failure

## FILE: 3-alloc_grid.c
**3. If you even dream of beating me you'd better wake up and apologize**

Write a function that returns a pointer to a 2 dimensional array of integers.
- Prototype: `int **alloc_grid(int width, int height);`
- Each element of the grid should be initialized to `0`
- The function should return `NULL` on failure
- If `width` or `height` is `0` or negative, return `NULL`

## FILE: 4-free_grid.c
**4. It's not bragging if you can back it up**

Write a function that frees a 2 dimensional grid previously created by your `alloc_grid` function.
- Prototype: `void free_grid(int **grid, int height);`
- Note that we will compile with your `alloc_grid.c` file. Make sure it compiles.

