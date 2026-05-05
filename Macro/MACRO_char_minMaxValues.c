#define SIGNED_CHAR_MIN -128
#define SIGNED_CHAR_MAX 127
#define UNSIGNED_CHAR_MAX 255

#include <stdio.h>

int main()
{
    printf("SIGNED_CHAR_MIN : %d %u\n", SIGNED_CHAR_MIN, SIGNED_CHAR_MIN);
    printf("SIGNED_CHAR_MAX : %d %u\n", SIGNED_CHAR_MAX, SIGNED_CHAR_MAX);
    printf("UNSIGNED_CHAR_MAX : %d %u\n", UNSIGNED_CHAR_MAX, UNSIGNED_CHAR_MAX);

    return 0;
}