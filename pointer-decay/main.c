/*
 * Testing pointer decays in C.
 * See in the code, that when we pass the array as parameter we lose some of its useful points.
 * 
 * We are showing below (printArrayElements) is not showing the information we want.
 * This loss of information may impact in the way we do our code, e.g., in the manner we are approaching the function, it's not possible to print the elements of the array.
 * 
 * The other function (printArrayElements2) is implemented in a manner that it works!
 * How?
 * We make pointer arithmetic, so if an integer is 4 into the memory, it jumps every 4 space, and the address will result in all elements of the array.
 */

#include <stdio.h>
#include <stdlib.h>

void printArrayElements(int * arr[]) {
    printf("%i\n", sizeof(arr)); // Expected output: 8 -> We would want 20.
        for(int i = 0; i < sizeof(arr) / 4; i++) {
        printf("VALUE: %i\n", *(arr + i)); // It even prints the first and third value of the array. Why? 
        // Because a pointer has size of 8, and if you jump through the memory, concidentally, you'll find the third value of this array.   
    }
    printf("-------------------------------------\n");
}

void printArrayElements2(int arr[], int arraySize) {
    // This number 4 that is dividing "arraySize" is chosen because of the type of the pointer, in other cases, we would choose another number, e.g., 1 for char - that would be the same as nothing.
    for(int i = 0; i < arraySize / 4; i++) {
        printf("VALUE: %i\n", *(arr + i));
    }
}

int main() {
    int myArr[5] = {1, 3, 5, 3, 2};
    
    printArrayElements(&myArr);
    printArrayElements2(&myArr, sizeof(myArr));
}