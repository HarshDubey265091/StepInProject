/**
 * @file fun.h
 * @author Harsh Dubey(you@domain.com)
 * @brief Header file to include the separatethehigher and matchcolour,Search function
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */



#ifndef _FUN_H
#define _FUN_H

/**
 * @brief Function to separate the higher order resistance value
 * 
 * @param s 
 * @param v 
 * @return char* 
 */

char *separatethehigher(char *s,int v);

/**
 * @brief Function to match the Resistance code colour from the Enum provided
 * 
 * @param str1 
 * @param str2 
 * @return int 
 */
int matchcolour(char *str1,char *str2);


/**
 * @brief Function to return the standard value for the particular Resistance Band
 * 
 * @param Band_Colour 
 * @return int 
 */
int Search(char *Band_Colour);

#endif
