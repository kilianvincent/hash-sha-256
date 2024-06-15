#include <stdio.h>

#include "lib/sha256.h"

int main(int argc, char** argv)
{
    char* clearMessage = "Hello world!";
    char* hashMessage = hash(clearMessage);

    printf("%s\n", hashMessage);

    return 0;
}
