/**
 * @file separatecolour.c
 * @author Harsh Dubey(you@domain.com)
 * @brief Function to separate the higher order resistance value
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */





#include "fun.h"
#include "string.h"
#include "stdio.h"




char *separatethehigher(char *s , int v)
    {
        char arr[3 * 12] = "";
        char *p1 = arr;
        size_t i = 0, len = 0;
        
        sprintf(arr,"%d",v);
        
        for(;*p1;p1++) {}
		len = p1 - arr;
            p1 = s + 3 * 12 - 2;
            while(len--)
            {
                if(i++ == 3)
                {
                    i=1;
                    *p1-- = ' ';
                }
                
                *p1 = arr[len];
                if(len) p1--;
            }

            for(i=0;*p1;p1++,i++) s[i] = *p1;
            s[i] = *p1;
            return s;   
    }
