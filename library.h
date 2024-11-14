//
//  library.h
//  StringLibrary
//
//  Created by apple on 2024/11/13.
//

#ifndef library_h
#define library_h


#include <stdio.h>  // For printf or standard I/O if needed
#include <stdlib.h> // For malloc, free, and other standard library functions
#include <ctype.h>  // For functions like isalpha, isspace

// Function declarations
int all_letter(char *s);
int num_in_range(char *s1, char b, char t);
int diff(char *s1, char *s2);
void shorten(char *s, int new_len);
int len_diff(char *s1, char *s2);
void rm_left_space(char *s);
int find(char *h, char *n);
int ends_with_ignore_case(char *s, char *suff);
char *repeat(char *s, int x, char sep);
char *replace(char *s, char *pat, char *rep);


#endif /* library_h */
