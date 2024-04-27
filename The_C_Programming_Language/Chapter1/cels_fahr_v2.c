#include <stdio.h>

int main (){
    float celsius, fahr;
    float upper, lower, step;

    lower = -17.8;
    upper = 148.9;
    step = (5.0 * 20.0) / 9.0;

    celsius = lower;

    printf("Celsius\tFahr\n");
    while(celsius < upper){
        fahr = (9.0 / 5.0) * celsius + 32;
        printf("%6.1f\t%3.0f\n", celsius, fahr);
        celsius += step;  
    }
}