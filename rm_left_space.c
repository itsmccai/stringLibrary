//
//  rm_left_space.c
//  StringLibrary
//
//  Created by apple on 2024/11/13.
//

#include <stdio.h>
#include "library.h"

void rm_left_space(char *s)
{
    char *t = s;
    char *q = s;
    
    while(*t != '\0')
    {
        if(!isspace(*t))
        {
            *q = *t;
            q++;
        }
        t++;
    }
    *t = '\0';
}
