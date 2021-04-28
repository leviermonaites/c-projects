#include <stdio.h>
#include <string.h>

char tracks[][80] = {
    "I left my heart in Harvard Med School",
    "Newark, Newark - a wonderful town",
    "Dancing with a Dork",
    "From here to maternity",
    "The girl from Iwo Jima",
};

void find_track(char search_for[]) 
{
    int i;
    for(i = 0; i < 5; i++) {
        if (strstr(tracks[i], search_for)) {
            printf("Track %i: '%s'\n", i, tracks[i]);
        }
    }
}

int main() {
    char askedSong[80];
    printf("%s", "Hey buddy, what is the good one today? ");
    fgets(askedSong, sizeof(askedSong), stdin);
    askedSong[strcspn(askedSong, "\n")] = 0;
    find_track(askedSong);
    return 0;
}