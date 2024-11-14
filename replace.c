//
//  replace.c
//  StringLibrary
//
//  Created by apple on 2024/11/13.
//

#include <stdio.h>
#include "library.h"

char *replace(char *s, char *pat, char *rep)
{
    //TO DO: need to count the occurenes of pat
    char *t = s;
    char *a = pat;
    char *b = rep;
    int len = 0;
    int p_len = 0;
    int r_len = 0;
    
    int new_len = 0;
    
    while(*t != '\0')
    {
        len++;
        t++;
    }
    while(*a != '\0')
    {
        p_len++;
        a++;
    }
    while(*b != '\0')
    {
        r_len++;
        b++;
    }
    
    int count = 0;
    int i = 0;
    int j = 0;
    while(*t != '\0')
    {
         if(t[i] == a[j])
         {
             int begin = i;
             while(t[begin] == a[j])
             {
                 begin++;
                 j++;
             }
             
             if(a[j] == '\0')
             {
                 
                 count++;
                 i = begin - 1;
                 
             }
             j = 0;
         }

    }
    
    
    
    // malloc
    if(p_len > r_len)
    {
        new_len = len - count * (p_len - r_len);
       
        
    }
    else if(p_len < r_len)
    {
        new_len = len + count * (r_len - p_len);    }
    else
    {
        new_len = len;
    }
    char *return_Value = (char*)malloc(new_len * sizeof(char));
                                     
                                     
    
    //replace
    int iter = 0;
    int result_iter = 0;
    while(*s != '\0')
    {
        int isMatch = 0;
        
        for(int j = 0; j < p_len; j++)
        {
            if(s[iter + j] == a[j])
            {
                isMatch = 1;
                
            }
        }
        iter++;
        
        if(isMatch)
        {
            for(int p = 0; p < r_len; p++)
            {
                return_Value[result_iter++] = b[p];
                
            }
            iter += p_len;
            
        }
        else
        {
            return_Value[result_iter++] = s[iter++];
        }
        
        
    }
    return return_Value;
    
    
    
    
    
}
