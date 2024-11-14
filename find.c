//
//  find.c
//  StringLibrary
//
//  Created by apple on 2024/11/13.
//

#include <stdio.h>
#include "library.h"

int find(char *h, char *n)
{
    int count = 0;
    int index = 0;
    
    while( *h != '\0')
    {
        if(h == n)
        {
            count++;
        }
        if(count == 2)
        {
            return index;
        }
        index++;
        h++;
        
    }
    return -1;
    
}
