#include <stdio.h>
#include <string.h>

void print_reverse(char *s)
{
    size_t len = strlen(s);
    char *t = s + len - 1;
    while(t >= s - 1) {
        printf("%c", *t);
        t = t - 1;
    };
    puts("");
}

int main() {
    print_reverse("Levi");
    return 0;
}