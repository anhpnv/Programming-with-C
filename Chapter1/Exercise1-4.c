#include<stdio.h>
// Write a program to print the corresponding Celsius to Fahrenheit table. 
int main(){
    float fahr,celsius;
    float upper, lower, step;
    step = 20;
    upper = 300;
    lower = 0;
    celsius = lower;
    while (celsius <= upper){
        fahr = celsius*(9.0/5.0) + 32.0;
        printf("%3.1f %6.0f\n",celsius,fahr);
        celsius += step;
    }
}