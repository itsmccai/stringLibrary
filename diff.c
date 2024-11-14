//
//  diff.c
//  StringLibrary
//
//  Created by apple on 2024/11/13.
//

#include <stdio.h>
#include "library.h"


int diff (char *s1, char *s2)
{
    int count = 0;
    while(*s1 != '\0' && *s2 != '\0')
    {
        if(*s1 != *s2)
        {
            count++;
        }
        s1++;
        s2++;
        
    }
    return count;
}
