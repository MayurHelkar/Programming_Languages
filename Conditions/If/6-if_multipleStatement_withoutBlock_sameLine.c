#include <stdio.h>

void trueStatementExecution(void);
void falseStatementExecution(void);

int main()
{
    trueStatementExecution();

    printf("\n");

    falseStatementExecution();
    
    printf("\n");
    
    printf("Not part of If statement\n");

    return 0;
}

void trueStatementExecution(void)
{
    printf("Check if the if(1) Executes or not ::\n");

    if(1) printf("If statement : True\n"); printf("Same True Block Execution 2nd line\n"); 

    return;
}

void falseStatementExecution(void)
{
    printf("Check if the if(0) Executes or not ::\n");
    
    if(0) printf("If statement : False\n"); printf("Same True Block Execution 2nd line\n"); 

    return;
}