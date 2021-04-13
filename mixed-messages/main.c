/*
 * It is just a foolish program-exercise.
 */

#include <stdio.h>

int main() {
    int x, y = 0;
    while(x < 5) {
        y = x - y;
        printf("%i%i", x, y);
        x++;
    }
    return 0;
}