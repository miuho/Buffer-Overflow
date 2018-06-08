#include <stdio.h>
#include <stdlib.h>

int main()
{
    int status = system("sh");
    if (status == -1)
        printf("Failed\n");

    return status;
}
