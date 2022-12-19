#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *my_strstr(char *param_1, char *param_2)
{
    int i = 0, n = strlen(param_1);
    char *found;

    for (i = 0; i < n; i++)
    {
        if (param_1[i] == param_2)
        {
            found = &param_1[i];
            param_1[i] = *found;
            return found;
        }
    }
    return NULL;
}