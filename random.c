#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "random.h"

char randchar(){
    
    char array_alph[26] = {'a','b','c','d','e','f','g','h','i',
    'j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    int randNum = 0;
   
    /* seed the randomizer */
	srand( (unsigned)time(NULL) );

    //Create a random number form 1 to 26
    for( int i=0; i<26; i++ ){
        randNum = rand() % 26;
    }

    return array_alph[randNum];

    

    }




