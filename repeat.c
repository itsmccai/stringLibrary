//
//  repeat.c
//  StringLibrary
//
//  Created by apple on 2024/11/13.
//

#include <stdio.h>
#include "library.h"

char *repeat(char *s, int x, char sep)
{
    int len = 0;
    while(*s != '\0')
    {
        len++;
        s++;
    }
    
    int new_len = x * len + x;
    char *return_Value = (char*)malloc((new_len + 1) * sizeof(char));
    
    int index = -1;
    for(int i = 0; i < x; i++)
    {
        for(int a = 0; a < len; a++)
        {
            return_Value[index++] = s[a];
            
        }
        return_Value[index++] = sep;
        
    }
    
    return return_Value;
    
}
