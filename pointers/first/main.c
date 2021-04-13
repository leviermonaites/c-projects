/*
 * Pointer : Show the basic declaration of pointer
 * From: https://www.w3resource.com/c-programming-exercises/pointer/index.php
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int m = 10;
    int n, o = 0;
    int *z = &m;

    printf("%p\n", z);
    printf("%p", &m);
    return 0;
}