#include <iostream>

using namespace std;

// void main(); // error: '::main' must return 'int'

// void main(){} // error: '::main' must return 'int'

/*
void main(){ return; } // error: '::main' must return 'int'
                       // error: return-statement with no value, in function returning 'int' [-fpermissive]
*/

// void main() { return 0; } // error: '::main' must return 'int'

// void main(){} // error: '::main' must return 'int'

int main() {}