#include <stdio.h>

/*
main(); // warning: data definition has no type or storage class
        // error: type defaults to 'int' in declaration of 'main' [-Wimplicit-int]
*/

// main(){} // error: return type defaults to 'int' [-Wimplicit-int]

/*
main(){ return; } // error: return type defaults to 'int' [-Wimplicit-int]
                  // error: 'return' with no value, in function returning non-void [-Wreturn-mismatch]
                  // note: declared here
*/

// main() { return 0; } // error: return type defaults to 'int' [-Wimplicit-int]

int main(){}