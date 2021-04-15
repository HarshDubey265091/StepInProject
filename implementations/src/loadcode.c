#include "fun.h"
#include "string.h"

#define ItemsCount (sizeof resistanceid/sizeof *resistanceid)

enum resistancebandcode {BLACK,BROWN,RED,ORANGE,YELLOW,GREEN,BLUE,VIOLET,GRAY,WHITE,GOLD,SILVER};

struct Resistance{
    char *ResistanceCode;
    enum resistancebandcode cd;
}resistanceid[] = {
    {"BLACK",BLACK},
    {"BROWN",BROWN},
    {"RED",RED},
    {"ORANGE",ORANGE},
    {"YELLOW",YELLOW},
    {"GREEN",GREEN},
    {"BLUE",BLUE},
    {"VIOLET",VIOLET},
    {"GRAY",GRAY},
    {"WHITE",WHITE},
    {"GOLD",GOLD},
    {"SILVER",SILVER},

};

int Search(char *Band_Colour)
    {
        int i;
        for(i=0;i<(int)ItemsCount;++i)
            if(*Band_Colour == *(resistanceid[i].ResistanceCode))
                if(!matchcolour(resistanceid[i].ResistanceCode,Band_Colour))
                    return i;

        return -1;
            }
