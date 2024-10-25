#include "libmx.h"

int mx_count_substr(const char *str, const char *sub) {
    if (str == NULL || sub == NULL) {
        return -1; 
    }
    if (*sub == '\0') {
        return 0;
    }
    int counter = 0;
    size_t sub_len = mx_strlen(sub);
    
    while (*str) {
        if (mx_strncmp(str, sub, sub_len) == 0) {
            counter++;
            str += sub_len;
        } else {
            str++;
        }
    }
    
    return counter;
}
