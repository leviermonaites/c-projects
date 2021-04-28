#include <stdlib.h>

int main()
{
    char command[] = "translator.exe < gpsdata.csv > output.json 2> errors.txt" ;
    system(command);
    return 0;
}