#include <stdio.h>

int main(){
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    printf("Fahrenheit to Celsious Converter.\n");
    printf("Fahr\tCelsius\n");
    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr += step;
    }
}