#include "../lib/sha256.h"

#include "../lib/padding.h"
#include "../lib/chunkBreak.h"

char *strcatarray(char * dest, char *strings[], size_t number)
{
    char *target = dest;               // where to copy the next elements
    *target = '\0';
    for (size_t i = 0; i < number; i++) {
        strcat(target, strings[i]);
        target += strlen(strings[i]);   // move to the end
    };
    return dest;
}

char* hash(char* msg)
{
    char* paddedMessage = padding(msg);
    char** chunks = chunkBreak(paddedMessage);
    char* hash = (char*) malloc(sizeof(chunks));
    hash = strcatarray(hash, chunks, sizeof(chunks)/sizeof(chunks[0]));
    return hash;
}