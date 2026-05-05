#include <stdio.h>

/*
int main(void); // undefined reference to `WinMain'
        // error: ld returned 1 exit status
*/

// int main(void){} // error: return type defaults to 'int' [-Wimplicit-int]

/*
int main(void){ return; } // error: 'return' with no value, in function returning non-void [-Wreturn-mismatch]
                          // note: declared here
*/

// int main(void) { return 0; } // error: return type defaults to 'int' [-Wimplicit-int]

int main(void){}