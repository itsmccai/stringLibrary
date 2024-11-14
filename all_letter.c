//
//  all_letter.c
//  StringLibrary
//
//  Created by apple on 2024/11/13.
//

#include <stdio.h>
#include "library.h"

int all_letter(char *s)
{
    char *t = s;
    while(*t != '\0')
    {
        if(isalpha(*t) != 0)
        {
            return 1;
        }
        t++;
    }
    return 0;
}
