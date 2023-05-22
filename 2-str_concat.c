#include "main.h"
#include <stdlib.h>
#include <string.h>

char *str_concat(char *s1, char *s2)
{
    if (s1 == NULL)
    {
        s1 = "";
    }

    if (s2 == NULL)
    {
        s2 = "";
    }

    int leng1 = strlen(s1);
    int leng2 = strlen(s2);
    int totaleng = leng1 + leng2 + 1;

    char *result = (char *)malloc((totaleng) * sizeof(char));

    if (result == NULL)
    {
        return NULL;
    }

    strcpy(result, s1);
    strcat(result, s2);

    return result;
}