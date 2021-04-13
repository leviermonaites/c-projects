/* 
 * Program to evaluate face values.
 * Used in pocker bets.
 * No License.
 * 2021 Levi Ermonaites
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char card_name[3];
    int val = 0;
    int count = 0;
    while (card_name[0] != 'X') {
        puts("Enter the card_name: ");
        scanf("%2s", card_name);
        switch (card_name[0]) {
        case 'Q':
        case 'J':
        case 'K':
            val = 10;
            break;

        case 'A':
            val = 11;
            break;

        case 'X':
            continue;

        default:
            val = atoi(card_name);
        }

        printf("%i \n", val);

        if (!(val >= 1) || !(val <= 10)) {
            puts("Only numbers in a range between 1 and 10 are allowed");
            continue;
        };

        if (val >= 3 && val <= 6) count++;
        else if (val == 10) count--;

        printf("Current count is: %i\n", count);
    }

    return 0;
}