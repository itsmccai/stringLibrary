//
//  main.c
//  StringLibrary
//
//  Created by apple on 2024/11/13.
//

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "library.h"
//methods
int main()

{
    //01
    printf("Testing all_letter:\n");
    printf("Expected: 1, Got: %d\n", all_letter("Hello"));
    printf("Expected: 0, Got: %d\n", all_letter("Hello123"));

    // Test for num_in_range
    printf("\nTesting num_in_range:\n");
    printf("Expected: 3, Got: %d\n", num_in_range("abcdefg", 'b', 'd'));
    printf("Expected: 0, Got: %d\n", num_in_range("123", 'a', 'z'));
    
    // Test for diff
    printf("\nTesting diff:\n");
    printf("Expected: 2, Got: %d\n", diff("abcdef", "abcxef"));
    printf("Expected: 5, Got: %d\n", diff("hello", "world"));
    
    // Test for shorten
    printf("\nTesting shorten:\n");
    char test_str1[] = "Hello, World!";
    shorten(test_str1, 5);
    printf("Expected: Hello, Got: %s\n", test_str1);
    
    // Test for len_diff
    printf("\nTesting len_diff:\n");
    printf("Expected: 3, Got: %d\n", len_diff("Hello", "Hi"));
    printf("Expected: -3, Got: %d\n", len_diff("Hi", "Hello"));
    
    // Test for rm_left_space
    printf("\nTesting rm_left_space:\n");
    char test_str2[] = "   Leading space";
    rm_left_space(test_str2);
    printf("Expected: 'Leading space', Got: '%s'\n", test_str2);
    
    // Test for find
    printf("\nTesting find:\n");
    printf("Expected: 6, Got: %d\n", find("Hello, world", "world"));
    printf("Expected: -1, Got: %d\n", find("Hello, world", "xyz"));
    
    // Test for ends_with_ignore_case
    printf("\nTesting ends_with_ignore_case:\n");
    printf("Expected: 1, Got: %d\n", ends_with_ignore_case("HelloWorld", "world"));
    printf("Expected: 0, Got: %d\n", ends_with_ignore_case("HelloWorld", "hello"));
    
    // Test for repeat
    printf("\nTesting repeat:\n");
    char *repeated = repeat("Go", 3, ',');
    printf("Expected: 'Go,Go,Go', Got: '%s'\n", repeated);
    free(repeated);
    
    // Test for replace
    printf("\nTesting replace:\n");
    char *replaced = replace("Hello world", "world", "universe");
    printf("Expected: 'Hello universe', Got: '%s'\n", replaced);
    free(replaced);




    return 0;
}

//03



//04



//05


//06


//09








//


//



