#include <stdio.h>
#include <string.h>


int titleToNumber(char* s) {
    int i;
    int sum = 0;
    int tmp;
    for(i=0; i<strlen(s); i++){
        tmp = s[i]-'A'+ 1;
        sum = sum*26 + tmp;
    }
    return sum;
}


int main(){
    printf("%d\n",titleToNumber("AB"));
    return 0;
}

