#include <iostream>

using namespace std;

// main(int); // error: expected constructor, destructor, or type conversion before ';' token

// main(int){} // warning: 'int main(int)' takes only zero or two arguments [-Wmain]

/*
main(int){ return; } // warning: 'int main(int)' takes only zero or two arguments [-Wmain]
                  // error: return-statement with no value, in function returning 'int' [-fpermissive]
*/

// main(int) { return 0; }

// int main(int){} // warning: 'int main(int)' takes only zero or two arguments [-Wmain]

int main(){}