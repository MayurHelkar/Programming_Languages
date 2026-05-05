#include <iostream>

using namespace std;

/*
void main(int); // error: '::main' must return 'int'
                // warning: 'int main(int)' takes only zero or two arguments [-Wmain]
*/

/*
void main(int){} // error: '::main' must return 'int'
                  // warning: 'int main(int)' takes only zero or two arguments [-Wmain]
*/

/*
void main(int){ return; } // error: '::main' must return 'int'
                           // warning: 'int main(int)' takes only zero or two arguments [-Wmain]
                           // error: return-statement with no value, in function returning 'int' [-fpermissive]
*/

/*
void main(int) { return 0; } // error: '::main' must return 'int'
                             // warning: 'int main(int)' takes only zero or two arguments [-Wmain]
*/

/*
void main(int){} // error: '::main' must return 'int'
                 // warning: 'int main(int)' takes only zero or two arguments [-Wmain]
*/

int main() {}