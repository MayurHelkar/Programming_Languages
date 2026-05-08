#include <iostream>

using namespace std;

void trueStatementExecution(void);
void falseStatementExecution(void);

int main()
{
    trueStatementExecution();

    cout << endl;

    falseStatementExecution();
    
    cout << endl;
    
    cout << "Not part of If statement" << endl;

    return 0;
}

void trueStatementExecution(void)
{
    cout << "Check if the if(1) Executes or not ::" << endl;

    if(1) cout << "If statement : True" << endl;

    return;
}

void falseStatementExecution(void)
{
    cout << "Check if the if(0) Executes or not ::" << endl;
    
    if(0) cout << "If statement : False" << endl;

    return;
}