#include <stdio.h>

int main() {
    float latitude;
    float longitude;
    char info[80];
    int started = 0;

    puts("{\n\t\"data\": [\t\t");
    while (scanf("%f, %f, %79s[^\n]", &latitude, &longitude, info) == 3) {
        if(latitude < -90 || latitude > 90) {
            puts("\n\t]\n}");
            fprintf(stderr, "Invalid latitude %f\n", latitude);
            return 2;
        }
        if(longitude < -180 || longitude > 180) {
            puts("\n\t]\n}");
            fprintf(stderr, "Invalid longitude %f\n", longitude);
            return 2;
        }
        if(started) 
            printf(",\n");
        else
            started = 1;

        printf("\t\t{\"latitude\": \"%f\", \"longitude\": \"%f\", \"info\": \"%s\"}", latitude, longitude, info);
    }
    puts("\n\t]\n}");
    return 0;
}