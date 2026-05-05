#include <stdio.h>

/*
void main(); // undefined reference to `WinMain'
             // error: ld returned 1 exit status
*/

// void main(){} // error: return type defaults to 'int' [-Wimplicit-int]


// void main(){ return; }

/*
void main() { return 0; } // error: 'return' with a value, in function returning void [-Wreturn-mismatch]
                          // note: declared here
*/

void main(){}