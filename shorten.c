//
//  shorten.c
//  StringLibrary
//
//  Created by apple on 2024/11/13.
//

#include <stdio.h>
#include "library.h"


void shorten(char *s, int new_len)
{
    int length = 0;
    while(*s != '\0')
    {
        length ++;
        s++;
    }
    if(length >= new_len)
    {
        s = realloc(s, new_len);
    }
    
}
