#include <stdbool.h>
#include <assert.h>

#include "fixstring.h"

//{}

unsigned int fstring_length(fixstring s) {
    
    int v;

    for(int i=0;  s[i] != '\0' && i<FIXSTRING_MAX;  i++){
      v = i;
    }

    return v+1;
}

bool fstring_eq(fixstring s1, fixstring s2) {

    int i = 0;
    bool strox = true;
    while (s1[i] != '\0' && s2[i] != '\0' && strox){

        if (s1[i] != s2[i]){

            strox = false;
        }
        else {
        i++;
        }
    }
    return (strox && s1[i] == s2[i]);
}

bool fstring_less_eq(fixstring s1, fixstring s2) {
    int i = 0;
    bool strox = true;
    bool ztrox = true;

    while (s1[i] != '\0' && s2[i] != '\0' && strox){

        if (s1[i] != s2[i]){

            ztrox = s1[i] <= s2[i];
            strox = false;
        }
        i++;
    }

    return (ztrox);

}

