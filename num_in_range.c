//
//  num_in_range.c
//  StringLibrary
//
//  Created by apple on 2024/11/13.
//

#include <stdio.h>
#include "library.h"

int num_in_range(char *s1, char b, char t)
{
    //return a number
    //which records the number of characters that c that c<=b <= t
    int count = 0;
    while(*s1 != '\0')
    {
        if(s1[0] >= b && s1[0] <= t)
        {
            count++;
        }
        s1++;
    }
    return count;
    
}
