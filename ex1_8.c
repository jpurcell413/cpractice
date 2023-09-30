#include <stdio.h>

int main(){
    int numT, numB, numNL;
    char c;

    numT = numB = numNL = 0;

    while((c=getchar()) != EOF){
        if(c == ' '){
            numB += 1;
        }
        if(c == '\t'){
            numT += 1;
        }
        if(c == '\n'){
            numNL += 1;
        }
    }
    printf("%d %d %d\n", numB, numT, numNL);
}