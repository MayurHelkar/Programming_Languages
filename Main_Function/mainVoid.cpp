#include <iostream>

using namespace std;


// main(void); // error: expected constructor, destructor, or type conversion before ';' token

// main(void){} // error: return type defaults to 'int' [-Wimplicit-int]

// main(void){ return; } // error: return-statement with no value, in function returning 'int' [-fpermissive]

// main(void) { return 0; } // error: return type defaults to 'int' [-Wimplicit-int]

int main(void){}