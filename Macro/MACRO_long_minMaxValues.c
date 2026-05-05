#define SIGNED_LONG_MIN -2147483648
#define SIGNED_LONG_MAX 2147483647
#define UNSIGNED_LONG_MAX 4294967295

#define SIGNED_LONG_MIN_HEX 0x80000000
#define SIGNED_LONG_MAX_HEX 0x7fffffff
#define UNSIGNED_LONG_MAX_HEX 0xffffffff

#include <stdio.h>
#include <limits.h>

int main()
{
    printf("SIGNED_LONG_MIN : %d %u\n", SIGNED_LONG_MIN, SIGNED_LONG_MIN);
    printf("SIGNED_LONG_MAX : %d %u\n", SIGNED_LONG_MAX, SIGNED_LONG_MAX);
    printf("UNSIGNED_LONG_MAX : %d %u\n", UNSIGNED_LONG_MAX, UNSIGNED_LONG_MAX);

    printf("\n");

    printf("SIGNED_LONG_MIN_HEX : %d %u\n", SIGNED_LONG_MIN_HEX, SIGNED_LONG_MIN_HEX);
    printf("SIGNED_LONG_MAX_HEX : %d %u\n", SIGNED_LONG_MAX_HEX, SIGNED_LONG_MAX_HEX);
    printf("UNSIGNED_LONG_MAX_HEX : %d %u\n", UNSIGNED_LONG_MAX_HEX, UNSIGNED_LONG_MAX_HEX);
    
    return 0;
}