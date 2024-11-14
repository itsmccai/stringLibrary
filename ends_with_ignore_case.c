//
//  ends_with_ignore_case.c
//  StringLibrary
//
//  Created by apple on 2024/11/13.
//

#include <stdio.h>
#include "library.h"

int ends_with_ignore_case(char *s, char *suff)
{
    int s_len = 0;
    int suff_len = 0;
    
    while(*s != '\0')
    {
        s_len++;
    }
    while(*suff != '\0')
    {
        suff_len++;
    }
    
    for(int i = 0; i < suff_len; i++)
    {
        if(s[s_len - suff_len + i] != suff[i])
        {
            return 0;
        }
        
    }
    return 1;
}
