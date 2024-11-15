//
//  rm_right_space.c
//  Assignment_02
//
//  Created by apple on 2024/11/15.
//

#include <stdio.h>
#include "library.h"

void rm_right_space(char *s) {
    int i = 0;
    while (s[i] != '\0') i++;
    i--;
    while (i >= 0 && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')) {
        s[i] = '\0';
        i--;
    }
}
