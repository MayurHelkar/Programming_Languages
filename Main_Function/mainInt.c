#include <stdio.h>

/*
main(int); // warning: data definition has no type or storage class
        // error: type defaults to 'int' in declaration of 'main' [-Wimplicit-int]
*/

// main(int){} // error: return type defaults to 'int' [-Wimplicit-int]

/*
main(int){ return; } // error: return type defaults to 'int' [-Wimplicit-int]
                  // error: 'return' with no value, in function returning non-void [-Wreturn-mismatch]
                  // note: declared here
*/

// main(int) { return 0; } // error: return type defaults to 'int' [-Wimplicit-int]

int main(int){}