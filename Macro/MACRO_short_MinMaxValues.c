#define SIGNED_SHORT_MIN -32768
#define SIGNED_SHORT_MAX 32767
#define UNSIGNED_SHORT_MAX 65535

#include <stdio.h>

int main()
{
    printf("SIGNED_SHORT_MIN : %d %u\n", SIGNED_SHORT_MIN, SIGNED_SHORT_MIN);
    printf("SIGNED_SHORT_MAX : %d %u\n", SIGNED_SHORT_MAX, SIGNED_SHORT_MAX);
    printf("UNSIGNED_SHORT_MAX : %d %u\n", UNSIGNED_SHORT_MAX, UNSIGNED_SHORT_MAX);

    return 0;
}