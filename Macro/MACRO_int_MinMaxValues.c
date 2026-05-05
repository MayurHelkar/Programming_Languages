#define SIGNED_INT_MIN -2147483648
#define SIGNED_INT_MAX 2147483647
#define UNSIGNED_INT_MAX 4294967295

#include <stdio.h>

int main()
{
    printf("SIGNED_INT_MIN : %d %u\n", SIGNED_INT_MIN, SIGNED_INT_MIN);
    printf("SIGNED_INT_MAX : %d %u\n", SIGNED_INT_MAX, SIGNED_INT_MAX);
    printf("UNSIGNED_INT_MAX : %d %u\n", UNSIGNED_INT_MAX, UNSIGNED_INT_MAX);

    return 0;
}