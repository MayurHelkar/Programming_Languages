#include <stdio.h>

/*
int main(); // undefined reference to `WinMain'
            // error: ld returned 1 exit status
*/

// int main(){}

/*
int main(){ return; } // error: 'return' with no value, in function returning non-void [-Wreturn-mismatch]
                      // note: declared here
*/

// int main() { return 0; } // error: return type defaults to 'int' [-Wimplicit-int]

int main(){}