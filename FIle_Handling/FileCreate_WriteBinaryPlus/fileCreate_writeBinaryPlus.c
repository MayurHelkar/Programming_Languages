#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *filePointer = fopen("FileCreate_WriteBinaryPlus.txt", "w");

    if(filePointer == NULL)
    {
        printf("Error in file Opening\n");
        exit(1);
    }

    fwrite("Hello World\n", 1, sizeof("Hello World\n"), filePointer);
    
    printf("File is created successsfully!!\n");
    
    fclose(filePointer);

    return 0;
}