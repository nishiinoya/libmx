#include "libmx.h"

char **mx_strsplit(const char *s, char c) {
    if (s == NULL) return NULL;
    int word_count = mx_count_words(s, c); 
    char **res = (char **)malloc((word_count + 1) * sizeof(char *));
    if (res == NULL) return NULL;
    int i = 0;
    const char *start = NULL;
    while (*s) {
        if (*s != c && !start) {
            start = s;
        } else if ((*s == c || *(s + 1) == '\0') && start) {
            int word_len = (s - start) + (*s != c);
            res[i] = (char *)malloc((word_len + 1) * sizeof(char));
            if (res[i] == NULL) return NULL; 

            for (int j = 0; j < word_len; j++) {
                res[i][j] = start[j];
            }
            res[i][word_len] = '\0';
            i++;
            start = NULL;
        }
        s++;
    }
    res[i] = NULL;
    return res;
}
