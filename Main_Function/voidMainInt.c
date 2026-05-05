#include <stdio.h>

/*
void main(int); // undefined reference to `WinMain'
                // error: ld returned 1 exit status
*/

// void main(int){} // error: return type defaults to 'int' [-Wimplicit-int]

// void main(int){ return; } 

/*
void main(int) { return 0; } // error: 'return' with a value, in function returning void [-Wreturn-mismatch]
                             // note: declared here
*/

void main(int){}