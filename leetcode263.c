#include <stdio.h>
#include <stdbool.h>

bool isUgly(int num) {

        while(num % 2 == 0){
            num /= 2;}
        while(num % 3 == 0){
            num /= 3;}
        while(num % 5 == 0){
            num /= 5;}
    return num == 1;
}

int main(){

    printf("%d\n",isUgly(121));
    return 0;
}
