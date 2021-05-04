/*
 * Script created to categorize the data within the file spooky.csv into a file named by the user.
 * You can choose the name of the types you want to extract, and where you want to put them.
 * It's just a script for exercising, but you can very well change the spooky.csv parameter to anything else, and then adjust to your needs.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char line[80];

    if(argc != 6) {
        fprintf(stderr, "You need to give 5 arguments\n");
        return 1;
    }

    FILE *in = fopen("spooky.csv", "r");
    FILE *file1 = fopen(*(argv + 2), "w");
    FILE *file2 = fopen(*(argv + 4), "w");
    FILE *file3 = fopen(*(argv + 5), "w");
    while(fscanf(in, "%79[^\n]\n", line) == 1) {
        if (strstr(line, *(argv + 1)))
            fprintf(file1, "%s\n", line);
        else if (strstr(line, *(argv + 3)))
            fprintf(file2, "%s\n", line);
        else
            fprintf(file3, "%s\n", line);
    }
    fclose(file1);
    fclose(file2);
    fclose(file3);
}