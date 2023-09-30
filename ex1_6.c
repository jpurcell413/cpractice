#include <stdio.h>

int main(){
    char c;
    printf("%d", ((c=getchar()) != EOF));
}