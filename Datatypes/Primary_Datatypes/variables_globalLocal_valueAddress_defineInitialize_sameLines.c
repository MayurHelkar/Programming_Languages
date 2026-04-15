/**
 * @file main.cpp
 * @brief Demonstrates global vs local variables and their memory addresses.
 * @details This program prints values and memory addresses of global and local variables
 *          to illustrate scope and memory layout in C.
 */

#include <stdio.h>

/**
 * @brief Global variables (default-initialized in global scope).
 * @details These variables are accessible throughout the program lifetime.
 */
char Char_G = 'W';
int Int_G = 8343;
float Float_G = 45.6432f;
double Double_G = 7664.12547;

/**
 * @brief Entry point of the program
 * @return int Exit status
 */
int main()
{
    /**
     * @brief Local variables (exist only within main function scope).
     */
    char Char_L = 'M';
    int Int_L = 832365;
    float Float_L = 65.1267f;
    double Double_L = 65343.12345;

    // ============================
    // Display Global Variables
    // ============================
    printf("==============================");
    printf("Global Variables: Value & Address");
    printf("==============================");

    printf("\n");
    
//        printf("Char_G   : %c   | Address: %p\n", Char_G, &Char_G);
    printf("Char_G   : %c   | Address: %p\n", Char_G, (void*)&Char_G);
    printf("Int_G    : %d   | Address: %p\n", Int_G, &Int_G);
    printf("Float_G  : %f   | Address: %p\n", Float_G, &Float_G);
    printf("Double_G : %lf   | Address: %p\n", Double_G, &Double_G);

    printf("\n\n");

    // ============================
    // Display Local Variables
    // ============================
    printf("==============================");
    printf("Local Variables: Value & Address");
    printf("==============================");

    printf("\n");

//        printf("Char_L   : %c   | Address: %p\n", Char_L, &Char_L);
    printf("Char_L   : %c   | Address: %p\n", Char_L, (void*)&Char_L);
    printf("Int_L    : %d   | Address: %p\n", Int_L, &Int_L);
    printf("Float_L  : %f   | Address: %p\n", Float_L, &Float_L);
    printf("Double_L : %lf   | Address: %p\n", Double_L, &Double_L);

    return 0;
}