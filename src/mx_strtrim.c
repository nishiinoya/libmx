#include "libmx.h"

char *mx_strtrim(const char *str) {
    if (str == NULL)
        return NULL;
    while (mx_isspace(*str))
        str++;
    int len = mx_strlen(str);
    while (len > 0 && mx_isspace(str[len - 1]))
        len--;

    return mx_strndup(str, len);
}
