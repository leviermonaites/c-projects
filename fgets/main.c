#include <stdio.h>

int main()
{
    char food[10];
    printf("Your favorite food: ");
    fgets(food, sizeof(food), stdin);
    printf("Yeah, %s is really delicious", food);
    return 0;
}