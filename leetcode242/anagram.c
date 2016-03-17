#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isAnagram(char* s, char* t) {
    int statS[26] = {0};
    int statT[26] = {0};
    int lenS = strlen(s);
    int lenT = strlen(t);
    for(int i=0; i<lenS; i++){
        int index = s[i] - 'a';
        statS[index] ++;
    }
     for(int i=0; i<lenT; i++){
        int index = t[i] - 'a';
        statT[index] ++;
    }
    for(int i=0; i<26; i++){
        if(statS[i] != statT[i]){
                return false;
        }
    }
    return true;
}

