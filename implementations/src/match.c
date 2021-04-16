/**
 * @file match.c
 * @author Harsh Dubey (you@domain.com)
 * @brief Function to match the Resistance code colour from the Enum provided
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */





#include "fun.h"
#include "string.h"



int matchcolour(char *str1,char *str2)
    {
        if(!str1 && !str2) return 0;
        if(str1 && !str2) return 1;
        if(!str1 && str2) return -1;

        for(; *str1 && *str2 && *str1 == *str2; str1++,str2++){}

        return *str1 - *str2;

    }
