#include <stdio.h>

int main(){
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    printf("Fahrenheit to Celsious Converter.\n");
    printf("Celsius\tFahrenheit\n");
    celsius = upper;
    while (celsius >= lower) {
        fahr = (celsius * (9.0/5.0)) + 32;
        printf("%6.1f\t%3.1f\n", celsius, fahr);
        celsius -= step;
    }
}