/*
 * Write a program in C to demonstrate how to handle the pointers in the program
 * From: https://www.w3resource.com/c-programming-exercises/pointer/index.php
 */
#include <stdio.h>

int main() {
    int m = 29;
    printf("Address of m : %p\n", &m);
    printf("Value of m %i\n\n", m);

    int * ab = &m;
    printf("Now ab is assigned with address of m.\n");
    printf("Address of pointer ab : %p\n", ab);
    printf("Content of pointer ab : %i\n\n", *ab);

    m = 7;
    printf("The pointer variable ab is assigned with the value 7 now \n");
    printf("Address of m : %p\n", &m);
    printf("Value of m: %i\n\n", m);
}