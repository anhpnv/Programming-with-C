#include <stdio.h>
//  Modify the temperature conversion program to print a heading above the table. 
int main(){
    float fahr, celsius;
    float lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    while (fahr <= upper){
        celsius = (5.0/9.0)*(fahr - 32.0);
        printf("%3.1f %6.2f\n", fahr, celsius);
        fahr += step;
    }
}