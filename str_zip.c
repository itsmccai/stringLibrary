//
//  str_zip.c
//  Assignment_02
//
//  Created by apple on 2024/11/15.
//

#include <stdio.h>
#include "library.h"

char *str_zip(char *s1, char *s2) {
    
    int len1 = 0, len2 = 0;
    while (s1[len1] != '\0')
        len1++;
    while (s2[len2] != '\0')
        len2++;

    int newlen = len1 + len2;
    char *newstr = malloc(newlen + 1);
    if (newstr == NULL)
        return NULL;

    int i = 0, j = 0, k = 0;
    while (i < len1 || j < len2) {
        if (i<len1)
            newstr[k++] = s1[i++];
        if (j<len2)
            newstr[k++] = s2[j++];
    }
    newstr[k] = '\0';

    return newstr;
}
