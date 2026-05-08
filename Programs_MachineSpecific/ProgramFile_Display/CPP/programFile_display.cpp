#include <iostream>

using namespace std;

int main()
{
    char c;
    FILE *fptr = fopen(__FILE__, "r");

    do
    {
        c = fgetc(fptr);
        putchar(c);
//    } while(c != '\0'); // Infinite Loop
    } while(c != EOF);

    fclose(fptr);

    return 0;
}