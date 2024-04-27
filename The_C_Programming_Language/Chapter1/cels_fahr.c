#include <stdio.h>

/*
This program outputs a celsius to fahrenheit table
*/
int main(){
    float celsius, fahr;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    while(fahr <= upper){
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%6.1f\t%3.0f\n", celsius, fahr);
        fahr += step;
    }
}