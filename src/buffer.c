#include "../include/lib.h"

void abAppend(struct abuf *ab, const char *s, int len)
{
    char *new = realloc(ab->len, ab->len + len);

    if(new == NULL)
        return;
    memcpy(&new[ab->len], s, len);
    ab->b = new;
    ab->len += len;
}

void abFree(struct abuf *ab)
{
    free(ab->b);
}