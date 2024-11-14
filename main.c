//
//  main.c
//  Assignment_02
//
//  Created by apple on 2024/11/11.
//

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    
    //Test Here:
    
    

    
    return 0;
    
    
    
    
    
    
    
    
    
    
    
}

//methods
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
//03
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


//04
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


//05
int len_diff(char *s1, char *s2)
{
    int length = (int) (s1 - s2);
    
    return length;
    
}

//06
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

//09
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







//
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

//
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


//



