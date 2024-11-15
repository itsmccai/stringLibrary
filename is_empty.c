//
//  is_empty.c
//  Assignment_02
//
//  Created by apple on 2024/11/15.
//

#include <stdio.h>
#include "library.h"


int is_empty(char *s) {
    if (s == NULL || s[0] == '\0') return 1;
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
            return 0;
        i++;
    }
    return 1;
}
