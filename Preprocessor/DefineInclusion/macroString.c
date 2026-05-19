// gcc -save-temps -o .\macroString .\macroString.c

#define helloWorld "HelloWorld"

int main()
{
    char var[20] = helloWorld ;

    return 0;
}