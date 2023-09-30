#include <stdio.h>
#define MAXLINE 5

int getlines(char line[], int maxline);
void copy(char to[], char from[]);

int main(){
    int len;
    int max;
    int prevmax;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = prevmax = 0;
    while ((len = getlines(line, MAXLINE)) > 0){
        if (len > max){
            max = len;
            copy(longest, line);
        }
        if(line[len - 1] != '\n'){
            prevmax = max;
            max = len + prevmax;
        }
        else{
            printf("%s \n", longest);
            printf("%d \n", max);
        }
    }
    return 0;
}

int getlines(char s[], int lim){
    int c, i;

    for (i=0; i<lim-1 && (c=getchar()) != EOF && c!='\n'; ++i){
        s[i] = c;
    }
    if(c=='\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[]){
    int i;

    i=0;

    while((to[i] = from[i]) != '\0') {
        ++i;
    }
}
