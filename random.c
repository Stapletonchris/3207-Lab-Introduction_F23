#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ALPH 26

char* array_alph[ALPH] = {'a','b','c','d','e','f','g','h','i',
    'j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

char randomchar(){

    int randNum = 0;
   
    /* seed the randomizer */
	srand( (unsigned)time(NULL) );

    //Create a random number form 1 to 26
    for( int i=0; i<ALPH; i++ ){
        randNum = rand() % 26;
    }


    

    }




}