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
