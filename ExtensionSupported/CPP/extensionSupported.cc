/*
int main return 0; // error: expected initializer before 'return'
*/

/*
int main 
return 0; // error: expected initializer before 'return'
*/

/*
int main // error: cannot declare '::main' to be a global variable
{ // note: to match this '{'
    return 0; // error: expected primary-expression before 'return'
} // error: expected '}' before 'return'
  // note: probably missing a comma or an operator before
*/

int main()
{
    return 0;
}