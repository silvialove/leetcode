#include <stdio.h>

int addDigits(int num) {
    while(num >= 10){
        num = num/10 + (num%10);
    }
    return num;
}


int main(){
    int n = 0;
    scanf("%d", &n);
    printf("%d\n", addDigits(n));
    return 0;
}
