#include "stdio.h"
#include "string.h"
#include "conio.h"
#include "fun.h"


enum {MinimumBandlimit = 4  , MaximumBandlimit=12};

char userstate = 'Y';



unsigned int resistancebandmultiplier [] = {1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000,0.1,0.01};

float resistancebandtolerance [] = {'\0',1,2,'\0','\0',0.5,0.25,0.1,0.05,'\0',5,10};

char *separatethehigher(char *s,int v);
int matchcolour(char *str1,char *str2);
int Search(char *Band_Colour);


int main()
{
    int i,err=0,m,n,tolerance;
    int resistance=0;
    char Band[MinimumBandlimit][MaximumBandlimit];//stores the resistance_colour_code
    int Band_Value[MinimumBandlimit];//stores the value of the band code
    char invalid_colour[MinimumBandlimit][MaximumBandlimit];//Invalid Band Colour Entry
    char finalValue[20] = "";//Output
    
    
     do {
    printf("ENTER THE SEVEN RESISTANCE BAND COLOUR CODE FROM THE LAST END AS SPECIFIED IN THE SPECIMEN\n");

    for(i=0;i<MinimumBandlimit;++i){
        printf("RESISTANCE BAND CODE %d\n",i+1);
        scanf("%s",&Band[i]);
        Band_Value[i] = Search(Band[i]);//calling the Bandcode function to search the code value
    }

        for(i=0;i<MinimumBandlimit;++i)
        {
            if(Band_Value[i] == -1)
            {
                strcpy(invalid_colour[i],Band[i]);
                err++;

            }
        }

        if(err>0)
        {
            if(err == 1)
            {
                printf("Invalid Band Colour : %s\n",invalid_colour[0]);
            }
            else if(err == 2)
            {
                printf("Invalid Band Colour : %s %s\n",invalid_colour[0],invalid_colour[1]);

            }
            else
            {
                printf("Invalid Band Colour: %s %s %s",invalid_colour[0],invalid_colour[1],invalid_colour[2]);

            }

        }
        else
        {
            for(i=0;i<MinimumBandlimit-2;++i)
            {
                resistance = (resistance*10) + Band_Value[i];
            }
            m=Band_Value[2];
            n=Band_Value[3];

            resistance *= resistancebandmultiplier[m];
            separatethehigher(finalValue,resistance);
            tolerance = resistancebandtolerance[n];
            printf("Resistance Value of the given specimen is: %s Ohm %d %% Tolerance\n",finalValue,tolerance);
            
            for (i = 0; i < MinimumBandlimit; ++i)
        {
            //printf("Input ==> %s\t", input[i]);
            //printf("index ==> %d\n", colour_val[i]);
        }
        }

        err = 0;
        resistance = 0;
        for(i=0;i<MinimumBandlimit;++i)
        {
            Band_Value[i] = 0;

        }

        printf("Do you want to proceed with the next specimen?\n");
        scanf("%d",&userstate);


        if(userstate == 'Y');
        else break;



        }while(userstate == 'Y');

        return 0;

    }

    

    


    