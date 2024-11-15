//
//  ptr_to.c
//  Assignment_02
//
//  Created by apple on 2024/11/15.
//

#include <stdio.h>
#include "library.h"



//10
char *ptr_to(char *h, char *n) {
    int i = find(h, n);
    if (i == -1) {
        return NULL;
    } else {
        return h + i;
    }
}
