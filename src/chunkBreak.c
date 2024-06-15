#include "../lib/chunkBreak.h"

char** chunkBreak(char* msg)
{
    char** chunks = (char**) malloc(sizeof(msg));
    chunks[0] = msg;
    return chunks;
}
