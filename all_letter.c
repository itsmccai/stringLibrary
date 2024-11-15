//
//  all_letter.c
//  Assignment_02
//
//  Created by apple on 2024/11/15.
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
