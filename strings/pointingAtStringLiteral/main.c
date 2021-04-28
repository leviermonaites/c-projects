/*
 * In this program, you can see how the "creation" of string literals in C actually happens.
 * We use a pointer that will point to an address that will be stored in the read-only memory.
 * This segment where the address is being pointed is stored doesn't accept changes at all - that's why you get an error when you try to change some value within them.
 * The code shows clearly that the address of the variable created is not the same that the address of the string - or the first character of the string.
 */

#include <stdio.h>

int main() {
    char * test = "hello";
    printf("%p\n", &test);
    printf("%s\n", &*test);
}